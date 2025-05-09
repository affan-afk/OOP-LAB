#include <iostream>
#include <string>

using namespace std;

class Ticket {
protected:
    int ticketID;
    string passengerName, date, destination;
    double price;

public:
    Ticket(int id, string name, string date, string dest, double price)
        : ticketID(id), passengerName(name), date(date), destination(dest), price(price) {}

    virtual void reserve() {
        cout << "Ticket reserved for " << passengerName << " to " << destination << " on " << date << endl;
    }

    virtual void cancel() {
        cout << "Ticket " << ticketID << " cancelled.\n";
    }

    virtual void displayTicketInfo() {
        cout << "Ticket ID: " << ticketID << "\nPassenger: " << passengerName
             << "\nDate: " << date << "\nDestination: " << destination << "\nPrice: $" << price << endl;
    }
};

class FlightTicket : public Ticket {
    string airlineName, flightNumber, seatClass;

public:
    FlightTicket(int id, string name, string date, string dest, double price,
                 string airline, string flightNo, string seatCls)
        : Ticket(id, name, date, dest, price),
          airlineName(airline), flightNumber(flightNo), seatClass(seatCls) {}

    void displayTicketInfo() {
        Ticket::displayTicketInfo();
        cout << "Airline: " << airlineName << "\nFlight Number: " << flightNumber
             << "\nSeat Class: " << seatClass << endl;
    }
};

class TrainTicket : public Ticket {
    string trainNumber, coachType, departureTime;

public:
    TrainTicket(int id, string name, string date, string dest, double price,
                string trainNo, string coach, string time)
        : Ticket(id, name, date, dest, price),
          trainNumber(trainNo), coachType(coach), departureTime(time) {}

    void displayTicketInfo() {
        Ticket::displayTicketInfo();
        cout << "Train Number: " << trainNumber << "\nCoach Type: " << coachType
             << "\nDeparture Time: " << departureTime << endl;
    }

    void selectSeats() {
        cout << "Seats selected for train " << trainNumber << endl;
    }
};

class BusTicket : public Ticket {
    string busCompanyName, seatNumber;

public:
    BusTicket(int id, string name, string date, string dest, double price,
              string company, string seatNo)
        : Ticket(id, name, date, dest, price),
          busCompanyName(company), seatNumber(seatNo) {}

    void cancel() {
        cout << "Bus ticket " << ticketID << " cancelled with last-minute refund.\n";
    }

    void displayTicketInfo() {
        Ticket::displayTicketInfo();
        cout << "Bus Company: " << busCompanyName << "\nSeat Number: " << seatNumber << endl;
    }
};

class ConcertTicket : public Ticket {
    string artistName, venue, seatType;

public:
    ConcertTicket(int id, string name, string date, string dest, double price,
                  string artist, string venue, string seatType)
        : Ticket(id, name, date, dest, price),
          artistName(artist), venue(venue), seatType(seatType) {}

    void displayTicketInfo() {
        Ticket::displayTicketInfo();
        cout << "Artist: " << artistName << "\nVenue: " << venue
             << "\nSeat Type: " << seatType << endl;
    }
};

int main() {
    FlightTicket ft(1, "Ali", "2025-05-15", "London", 750, "British Airways", "BA123", "Economy");
    TrainTicket tt(2, "Sara", "2025-05-10", "Lahore", 40, "PK101", "AC", "09:00 AM");
    BusTicket bt(3, "Hassan", "2025-05-12", "Islamabad", 20, "Daewoo", "B15");
    ConcertTicket ct(4, "Ayesha", "2025-06-01", "Karachi", 100, "Atif Aslam", "Expo Center", "VIP");

    ft.displayTicketInfo();
    cout << endl;
    tt.displayTicketInfo();
    tt.selectSeats();
    cout << endl;
    bt.displayTicketInfo();
    bt.cancel();
    cout << endl;
    ct.displayTicketInfo();

    return 0;
}
