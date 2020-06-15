#ifndef FILEPRESENDING_H
#define FILEPRESENDING_H

#include <string>
#include <vector>


/***************************************************************************//**
 * This class does some preparation on the file,
 * reading, compressing and splitting file
 ******************************************************************************/

class FilePreSending
{


public:

    /***************************************************************************//**
     * Constructor with one argument: absolute address of a file.
     ******************************************************************************/ 
    explicit FilePreSendin(const std::string &address);

    /***************************************************************************//**
     * This member function reads a file, it has two arguments: address of the file 
     * and size of blocks in bytes. It reades the file block by block, and stores them
     * in blocks member field.
     ******************************************************************************/
    void read_file(const std::string &address, size_t block_size);


    /***************************************************************************//**
     * This member function Compresses a file and saves it in the same address as
     * the main file.
     *******************************************************************************/
    void compress_file();
	
   
    /***************************************************************************//**
     * This member function returns file_name member field 
     ******************************************************************************/
    std::string get_file_name();    

private:

    std::string file_address; ///< address of file. 
    std::string file_name; ///< name of file.
    std::vector<std::string>* blocks; ///< file is stored in blocks

}


#endif
                                                                                                                                                                                                          
              
