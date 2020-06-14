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
     * Constructor with one parameter: absolute address of a file.
     ******************************************************************************/ 
    FilePreSending(const std::string &address);

    /***************************************************************************//**
     * This member function reads a file, it has one parameter: address of the file.
     * It stores the file in whole_file member field.
     ******************************************************************************/
    void read_file(const std::string &address);

    /***************************************************************************//**
     * This member function Compresses a file and saves it in the same address as
     * the main file, it has one parameter: address of destination (compressed)file
     ******************************************************************************/
    void compress_file(const std::string &address);
	
    /***************************************************************************//**
     * This member function splits a file into blocks,
     * it has two parameter: size of blocks and
     * an empty vector of blocks.
     ******************************************************************************/
    void split_file(size_t block_size, std::vector<std::string>&);
    

    /***************************************************************************//**
     * This member function returns file_name address 
     ******************************************************************************/
    std::string* get_file_name();    

private:

    std::string file_address; ///< address of file. 
    std::string file_name; ///< name of file.
    std::string* whole_file; ///< the whole file which is readed.

}


#endif
                                                                                                                                                                                                          
              
