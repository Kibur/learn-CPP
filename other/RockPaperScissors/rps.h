#include <string>

class RPS {
    private:
        std::string choice;
        const std::string CHOICES[3] = { "Rock", "Paper", "Scissors" };

        int combinations(const std::string&, const std::string&);

    public:
        RPS();
        RPS(const std::string&);
        ~RPS();
        std::string getSelected();
        std::string compare(RPS*);
};
