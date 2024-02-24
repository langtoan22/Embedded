# Embedded

# 3. SPI
## 3.2 SPI HARD
### 3.2.1 SPI CONFIG

![SPI_Config](https://github.com/langtoan22/Embedded/assets/106759979/09c8aa61-32a6-4965-ae6a-e6e646ae91ec)

### 3.2.2 SPI_SendData 
- Ta có một thanh ghi SPI, khi khai báo biến Data thì các bit được nạp vào đầy 16 ô của thanh ghi. Sau khi khi nạp thì sẽ được truyền đi từng bit khi đó thi thanh ghi sẽ trống từng ô một. Đến khi trong hết 16 ô thì tiến hành kiểm tra thanh ghi xem có trống hay không, nếu trống == RESET.


        void SPI_SendData(SPI_TypeDef* SPIx, uint16_t Data){
            
            // Gui du lieu
            SPI_I2S_SendData(SPIx, Data);
            
            // ham kiem tra thanh ghi da trong 16 o hay chua
            while(SPI_I2S_GETFlagStatus(SPIx, SPI_I2S_FLAG_TXE) == RESET);
            
                // if (timeout == 0) break; // thoat khoi vong while
        }

### 3.2.3 ReceiveData
- Sau khi dữ liệu được gửi từ thanh ghi gửi thì dữ liệu tự động thêm data vào thanh ghi nhận. Sau đó tiến hành các ô trong thanh ghi đã đầy đủ data được nhận hay chưa bằng vòng wile. 


            uint16_t SPI_ReceiveData(SPI_TypeDef* SPIx){
                
                // Cho den khi co du lieu trong thanh ghi(bo nho dem nhan)
                while(SPI_I2S_GetFlagStatus(SPIx, SPI_I2S_FLAG_RXNE) == RESET);
                // timeout thoat khoi vong while
                
                return SPI_I2S_ReceiveData(SPIx);
            }