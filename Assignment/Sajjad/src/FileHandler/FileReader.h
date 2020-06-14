#ifndef FILEREADER_H
#define FILEREADER_H
#include <string>
#include <vector>

class FileReader
{

/** This class does some preparation on
  * on file like, reading file, spliting,
  * compressing.
  */

public:

    /// constructor with one parameter: absolute file address. 
    FileReader(std::string);

    /// read a new file, one parameter: absolute file address, return the whole file.
    std::string readFile(std::string);

    /// compress file and save it: get absolute file address of new file as prameters    
    void compressFile(std::string);
	
    /// split File into blocks, get size of blocks and an empty vector as parameters.
    void  splitFile(size_t block_size, vector<std::string>&);
    
    std::string getFileName();    

private:
    std::string mFileAddress;
    std::string mFileName;

}


#endif
~                                                                                                                                                                                                          
~               
