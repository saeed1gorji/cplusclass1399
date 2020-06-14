#ifndef DECRYPTOR_H
#define DECRYPTOR_H
#include <string>


class Encryptor
{

/** This class simply
  * decrypt a bock of encrypted
  * characters.
  */

public:

    /// constructor with a parameter: defined key. 
    Decryptor(const size_t);

    /// decrypt a block in place.
    void decrypt(std::string&);

    std::string getKey();

private:

    std::string mKey;

}


#endif
~      
