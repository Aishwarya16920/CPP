#include <iostream>

using namespace std;

class Movie{
    private:
        string rating;
    public:
        string title;
        string director;
        Movie(string atitle, string adirector, string arating){
            title = atitle;
            director = adirector;
            setRating(arating);
        }

        void setRating(string arating){
            if(arating == "G" || arating == "PG" || arating == "PG-13"){
                rating = arating;
            }
            else{
                rating = "NR";
            }
        }

        string getRating(){
            return rating;
        }
};

int main(){

    Movie movie("The Avengers", "Joss Whedon", "PG-13");
    movie.setRating("Dog");
    movie.setRating("PG");
    cout << movie.getRating();
    return 0;
}