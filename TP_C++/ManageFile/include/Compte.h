#ifndef COMPTE_H
#define COMPTE_H

#include <string>
class Compte
{
    public:
        Compte();

        int Get_id() { return _id; }
        void Set_id(int val) { _id = val; }
        std::string Get_login() { return _login; }
        void Set_login(std::string val) { _login = val; }
        std::string Get_password() { return _password; }
        void Set_password(std::string val) { _password = val; }

        bool changePassword(std::string oldpassword , std::string newpassword);

    protected:

    private:
        int _id;
        std::string _login;
        std::string _password;
};

#endif // COMPTE_H
