#include <iostream>
#include <string>
#include <fstream>
#include "datapoint.h"
#include <queue>
#include <limits>
#include <stdexcept>


    std::ostream& operator<<(std::ostream& os, const DataPoint& un_data_point){
                os <<un_data_point.unite<<" "<<un_data_point.lattitude<<" ";
               os<<un_data_point.longitude<<" ";
               os<<un_data_point.temperature<<std::endl; 
               return os;
    }

int main() {
 
      std::string ligne;
      std::vector<std::string> lignes;
       std::priority_queue<DataPoint> data_points;
      std::ifstream lecteur("rawdata.txt");
      
      double lattitude;
      double longitude;
      std::string identifiant;
      int temperature;
      std::string timestamp;
      
      
      
     while(!lecteur.eof())
      {    
            lecteur>>lattitude;
            lecteur>>longitude;
            lecteur>>identifiant;      
            lecteur>>temperature;
            lecteur>>timestamp; 
            
            DataPoint ma_datapoint(timestamp,lattitude,longitude,temperature);    
            data_points.push(ma_datapoint);
       }
       
         
         lecteur.close();
         
         std::ofstream fichierEcriture("candata.txt");
         
         while(data_points.size()>0)
         {
             std::cout<<data_points.top();
             fichierEcriture<<data_points.top();
             data_points.pop();     
             }
             fichierEcriture.close();
             
     
  
  
}

 








 