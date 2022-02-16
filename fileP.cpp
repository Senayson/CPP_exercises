#include <iostream>
#include <fstream>

using namespace std;

void csv_export(string data[][10], int records, int columns, string filename){

    ofstream outFile;
    outFile.open(filename);

    

    for(int i = 0; i < columns; i++){

        for(int j = 0; j < records; j++){

            outFile << data[j][i];
            if(j < records - 1)
                outFile << ",";
        }
        outFile << '\n';
    }

    outFile.close();
  
}

int main() {

string data[10][10] = {{"aspen","olmsted","aspen@pleasedonotemail.com"},{"sally","jones","sally@gmail.com"},{"fred","smith","fsmith@aol.com"}};

csv_export(data, 3,3, "outfile.txt");


return 0;

} 