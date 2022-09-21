int main (){
  
#declare fstream variable 
std::ifstream myfile;
  
#open file
myfile.open("README.md");
  
#declare stream variable
std::string myline;
  
if ( myfile.is_open() ) {
while ( myfile ) { 
std::getline (myfile, myline);
std::cout << myline << '\n';
}
}
else {
std::cout << "Couldn't open file\n";
}
  
return 0;      
}
