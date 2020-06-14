#ifndef ENCRYPOTR_H
#define ENCRYPTOR_H
#include <string>


class Encryptor
{

/** This class simply
  * encrypt a bock of characters
  * using a defined key.
  */
 
public:	
    /// default constructor.	
    Encryptor(); 

    /// constructor with two parameters: size of block and key. 
    Encryptor(const size_t, std::string);

    /// encrypt a block in place.
    void encrypt(std::string&);

    std::string getKey();

    /// randomly generate a new key.
    void generateNewKey();

    /// you can set your own key.
    void setNewKey(std::string);

private:
    const size_t mBlockSize; ///< size of block
    std::string mKey; 

}


#endif
