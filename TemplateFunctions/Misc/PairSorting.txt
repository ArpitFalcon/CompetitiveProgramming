/******************************************
* AUTHOR : ARPIT *
* NICK : arpitfalcon *
* INSTITUTION : BIT MESRA *
* Harwork is the key to success. *
******************************************/

// Sort by first

sort(vect.begin(), vect.end()); 

// Sort by second

bool sortbysec(const pair<int,int> &a, 
              const pair<int,int> &b) 
{ 
    return (a.second < b.second); 
}

sort(vect.begin(), vect.end(), sortbysec); 

// Sort first by dec

bool sortinrev(const pair<int,int> &a,  
               const pair<int,int> &b) 
{ 
       return (a.first > b.first); 
} 

sort(vect.begin(), vect.end(), sortinrev);

// Sort second by dec

bool sortbysecdesc(const pair<int,int> &a, 
                   const pair<int,int> &b) 
{ 
       return a.second>b.second; 
}

sort(vect.begin(), vect.end(), sortbysecdesc); 



