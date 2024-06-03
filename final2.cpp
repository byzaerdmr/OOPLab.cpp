#include <iostream>
using namespace std;

class CurrencyConverterError : public exception
{
    private:
        string errorMessage;
        int errorCode;

    public:
        CurrencyConverterError(const string& message, int code) : errorMessage(message), errorCode(code) {}

        const char* what() const noexcept
        {
            cout << "Currency Converter Error!!" << "Error Code: " << errorCode << endl;
        }

        const string getErrorString() const noexcept
        {
            return errorMessage;
        }
};

class CurrencyConverter
{
    private:
   
        string currency1, currency2;
        double currency1Value, currency2Value;

    public:

        CurrencyConverter(string c1, string c2, double c1v, double c2v) 
        {
            if(c1v <= 0 || c2v <= 0)
            {
                throw CurrencyConverterError("Currency value cannot be negative or zero", 1001);
            }
            else
            {
                currency1 = c1;
                currency2 = c2;
                currency1Value = c1v;
                currency2Value = c2v;
            }
        }

void changeExchangeRate(string currency_name, double new_rate)
{
    if(new_rate <= 0)
    {
        throw CurrencyConverterError("Currency value cannot be negative or zero", 1001);
    }
    else
    if(currency_name == currency1)
    {
        currency1Value = new_rate;
    }
    else if(currency_name == currency2)
    {
        currency2Value = new_rate;
    }
    else
    {
        throw CurrencyConverterError("Invalid currency" + currency_name, 1005);
    }

cout<< "New exchange rate for " << currency_name << " is " << new_rate << endl;
}
double convertCurrency(const string& fromCurrency, const string& toCurrency, double amount) {

        if (amount < 0)
        {
            throw CurrencyConverterError("Amount must be non-negative", 1002);
        }
        if (fromCurrency == currency1)
        {
            if(toCurrency == currency2)
            {
                return currency1Value*amount;
            }
            else
            {
                throw CurrencyConverterError("Invalid target currency: " + toCurrency, 1003);
            }

        }
        else if (fromCurrency == currency2)
        {
            if(toCurrency == currency1)
            {
                return currency2Value*amount;
            }
            else
            {
                throw CurrencyConverterError("Invalid target currency: " + toCurrency, 1003);
            }
        }
        else
        {
            throw CurrencyConverterError("Invalid source currency: " + fromCurrency, 1004);
        }
    }
};

int main() {
    try {

        CurrencyConverter TLtoUSD("TL","USD", 0.031, 31);


        double tlusd = TLtoUSD.convertCurrency("TL", "USD", 100);
        cout << "100 TL is " << tlusd << " USD" << endl;
        TLtoUSD.changeExchangeRate("JPY", 100);

        double usdtl = TLtoUSD.convertCurrency("USD", "TL", 100);
        cout << "100 USD is " << usdtl << " TL" << endl;

        double usdtojpy = TLtoUSD.convertCurrency("JPY", "USD", -100);



    }
    catch (const CurrencyConverterError& e )
    {
        cout << "CurrencyConverterError: " << e.what() << endl;
        cout << "Error Explaination:" << e.getErrorString();
    }
    catch (const exception& e )
    {

        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}
