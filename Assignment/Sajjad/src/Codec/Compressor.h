#ifndef COMPRESSOR_H
#define COMPRESSOR_H
#include <string>


class Compressor
{

/** This class simply
  * compress a file.
  */

public:
    /// default constructor.    
    Compressor(std::string file_address);

    /// compress a file
    std::string compress(std::string&);

private:
    

}


#endif
~      
