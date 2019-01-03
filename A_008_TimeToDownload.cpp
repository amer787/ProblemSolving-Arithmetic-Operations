

/**
 *Problem 8: Time to Download
Estimate the time it takes to download a file given the file size in gigabytes
and the network speed in megabits per second.
*/

#include <iostream>


int main()
{
    int fileSize;
    int networkSpeed;
    int timeToDownload;

    std::cout << "Enter File Size in Gigabytes " << std::endl;
    std::cin >> fileSize;

    std::cout << "Enter Network Speed in Megabits per Second " << std::endl;
    std::cin >> networkSpeed;

    timeToDownload = fileSize * 1024 / networkSpeed;
    std::cout << "********************************" << std::endl;
    std::cout << "File Size: " << fileSize << " GB" << std::endl;
    std::cout << "Network Speed: " << networkSpeed << " Mbps" << std::endl;
    std::cout << "Time to Download: " << timeToDownload << " seconds" << std::endl;
    std::cout << "********************************" << std::endl;

    return 0;
}


// #include <iostream>
// using namespace std;

// int main() {
//     double fileSizeGB, speedMbps;

//     cout << "Enter the file size (GB): ";
//     cin >> fileSizeGB;
//     cout << "Enter the download speed (Mbps): ";
//     cin >> speedMbps;

//     double fileSizeMb = fileSizeGB * 8 * 1024; // Convert GB to Mb
//     double timeSeconds = fileSizeMb / speedMbps;
//     double timeMinutes = timeSeconds / 60;

//     cout << "Estimated download time: " << timeMinutes << " minutes" << endl;
//     return 0;
// }

