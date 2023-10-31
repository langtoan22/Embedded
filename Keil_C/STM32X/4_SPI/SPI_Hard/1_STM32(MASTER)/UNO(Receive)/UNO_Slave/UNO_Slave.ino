#define SCK_PIN     4
#define MOSI_PIN    5
#define MISO_PIN    6
#define SS_PIN      7

byte receivedData;

void setup() {
  Serial.begin(9600);  // Bật cổng Serial để hiển thị dữ liệu nhận được từ Master
  pinMode(SS_PIN, INPUT);
  pinMode(MISO_PIN, OUTPUT);
  pinMode(MOSI_PIN, INPUT);
  pinMode(SCK_PIN, INPUT);
  SPI.begin();
  SPI.setDataMode(SPI_MODE0); // Thiết lập chế độ SPI
  SPI.attachInterrupt();      // Kích hoạt ngắt SPI
}

void loop() {
  // Kiểm tra xem có dữ liệu mới từ Master không
  if (SPI.transferComplete()) {
    // Nhận dữ liệu từ Master
    receivedData = SPI.transfer(0); // Gửi 0 để nhận dữ liệu từ Master

    // Hiển thị dữ liệu nhận được
    Serial.print("Received Data: ");
    Serial.println(receivedData);

    // Xử lý dữ liệu (nếu cần) và trả lại cho Master (để mô phỏng việc truyền lại)
    byte responseData = receivedData + 1; // Xử lý dữ liệu (ví dụ: tăng giá trị lên 1)
    SPI.transfer(responseData);           // Trả lại dữ liệu cho Master
  }
}