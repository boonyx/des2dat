#include <iostream>
#include <string>
#include <math.h>

using namespace std;

const int num = 100;

struct weapons {
    struct rarity {
        struct slot {
            string name;
            string sub;
            int glimmer;
            int shards;
        }id[num];
    }kinetic, energy, power;
}exotic, legendary, rare, common;

// sidearm, hand cannon, auto rifle, trace rifle, scout rifle, shotgun, sniper rifle, pulse rifle, submachine gun, bows, grenade launchers, fusion rifle, sword, rocket launcher, linear fusion rifle, machine gun

class Filler {
public:
        Filler() {
            exotic.kinetic.id[0].name = "Sweet Business ";
            exotic.kinetic.id[0].sub = "Auto Rifle ";
            exotic.kinetic.id[0].glimmer = 2500;
            exotic.kinetic.id[0].shards = 20;

            exotic.kinetic.id[1].name = "Sturm ";
            exotic.kinetic.id[1].sub = "Hand Cannon ";
            exotic.kinetic.id[1].glimmer = 2500;
            exotic.kinetic.id[1].shards = 20;

            exotic.kinetic.id[2].name = "Vigilance Wing ";
            exotic.kinetic.id[2].sub = "Pulse Rifle ";
            exotic.kinetic.id[2].glimmer = 2500;
            exotic.kinetic.id[2].shards = 20;

            exotic.kinetic.id[3].name = "Rat King ";
            exotic.kinetic.id[3].sub = "Sidearm ";
            exotic.kinetic.id[3].glimmer = 2500;
            exotic.kinetic.id[3].shards = 20;

            exotic.kinetic.id[4].name = "MIDA Multi-Tool ";
            exotic.kinetic.id[4].sub = "Scout Rifle ";
            exotic.kinetic.id[4].glimmer = 2500;
            exotic.kinetic.id[4].shards = 20;

            exotic.kinetic.id[5].name = "Crimson ";
            exotic.kinetic.id[5].sub = "Hand Cannon ";
            exotic.kinetic.id[5].glimmer = 2500;
            exotic.kinetic.id[5].shards = 20;

            exotic.kinetic.id[6].name = "The Jade Rabbit ";
            exotic.kinetic.id[6].sub = "Scout Rifle ";
            exotic.kinetic.id[6].glimmer = 2500;
            exotic.kinetic.id[6].shards = 20;

            exotic.kinetic.id[7].name = "The Huckleberry ";
            exotic.kinetic.id[7].sub = "Submachine Gun ";
            exotic.kinetic.id[7].glimmer = 2500;
            exotic.kinetic.id[7].shards = 20;

            exotic.kinetic.id[8].name = "SUROS Regime ";
            exotic.kinetic.id[8].sub = "Auto Rifle ";
            exotic.kinetic.id[8].glimmer = 2500;
            exotic.kinetic.id[8].shards = 20;

            exotic.kinetic.id[9].name = "Cerberus+1 ";
            exotic.kinetic.id[9].sub = "Auto Rifle ";
            exotic.kinetic.id[9].glimmer = 2500;
            exotic.kinetic.id[9].shards = 20;

            exotic.kinetic.id[10].name = "Wish Ender ";
            exotic.kinetic.id[10].sub = "Bow ";
            exotic.kinetic.id[10].glimmer = 2500;
            exotic.kinetic.id[10].shards = 20;

            exotic.kinetic.id[11].name = "Malfeasance ";
            exotic.kinetic.id[11].sub = "Hand Cannon ";
            exotic.kinetic.id[11].glimmer = 2500;
            exotic.kinetic.id[11].shards = 20;

            exotic.kinetic.id[12].name = "Ace of Spades ";
            exotic.kinetic.id[12].sub = "Hand Cannon ";
            exotic.kinetic.id[12].glimmer = 2500;
            exotic.kinetic.id[12].shards = 20;

            exotic.kinetic.id[13].name = "The Chaperone";
            exotic.kinetic.id[13].sub = "Shotgun ";
            exotic.kinetic.id[13].glimmer = 2500;
            exotic.kinetic.id[13].shards = 20;

            exotic.kinetic.id[14].name = "Izanagi's Burden";
            exotic.kinetic.id[14].sub = "Sniper Rifle ";
            exotic.kinetic.id[14].glimmer = 2500;
            exotic.kinetic.id[14].shards = 20;

            exotic.kinetic.id[15].name = "The Last Word";
            exotic.kinetic.id[15].sub = "Hand Cannon ";
            exotic.kinetic.id[15].glimmer = 2500;
            exotic.kinetic.id[15].shards = 20;

            exotic.kinetic.id[16].name = "Arbalest ";
            exotic.kinetic.id[16].sub = "Linear Fusion Rifle ";
            exotic.kinetic.id[16].glimmer = 2500;
            exotic.kinetic.id[16].shards = 20;

            exotic.kinetic.id[17].name = "Thorn ";
            exotic.kinetic.id[17].sub = "Hand Cannon ";
            exotic.kinetic.id[17].glimmer = 2500;
            exotic.kinetic.id[17].shards = 20;

            exotic.kinetic.id[18].name = "Outbreak Perfected ";
            exotic.kinetic.id[18].sub = "Pulse Rifle ";
            exotic.kinetic.id[18].glimmer = 2500;
            exotic.kinetic.id[18].shards = 20;

            exotic.kinetic.id[19].name = "Bad Juju ";
            exotic.kinetic.id[19].sub = "Pulse rifle ";
            exotic.kinetic.id[19].glimmer = 2500;
            exotic.kinetic.id[19].shards = 20;

            exotic.kinetic.id[20].name = "Lumina ";
            exotic.kinetic.id[20].sub = "Hand Cannon ";
            exotic.kinetic.id[20].glimmer = 2500;
            exotic.kinetic.id[20].shards = 20;

            exotic.kinetic.id[21].name = "Monte Carlo ";
            exotic.kinetic.id[21].sub = "Autio Rifle ";
            exotic.kinetic.id[21].glimmer = 2500;
            exotic.kinetic.id[21].shards = 20;

            exotic.kinetic.id[22].name = "Bastion ";
            exotic.kinetic.id[22].sub = "Fusion Rifle ";
            exotic.kinetic.id[22].glimmer = 2500;
            exotic.kinetic.id[22].shards = 20;

            exotic.kinetic.id[23].name = "Witherhoard ";
            exotic.kinetic.id[23].sub = "Grenade Launcher ";
            exotic.kinetic.id[23].glimmer = 2500;
            exotic.kinetic.id[23].shards = 20;

            exotic.kinetic.id[24].name = "Traveler's Chosen ";
            exotic.kinetic.id[24].sub = "Sidearm ";
            exotic.kinetic.id[24].glimmer = 2500;
            exotic.kinetic.id[24].shards = 20;

            exotic.kinetic.id[25].name = "No Time To Explain ";
            exotic.kinetic.id[25].sub = "Pulse Rifle ";
            exotic.kinetic.id[25].glimmer = 2500;
            exotic.kinetic.id[25].shards = 20;

            exotic.kinetic.id[26].name = "Hawkmoon ";
            exotic.kinetic.id[26].sub = "Hand Cannon ";
            exotic.kinetic.id[26].glimmer = 2500;
            exotic.kinetic.id[26].shards = 20;

            exotic.kinetic.id[27].name = "Dead Man's Tale ";
            exotic.kinetic.id[27].sub = "Scout Rifle ";
            exotic.kinetic.id[27].glimmer = 2500;
            exotic.kinetic.id[27].shards = 20;

            exotic.kinetic.id[28].name = "Cryosthesia 77K ";
            exotic.kinetic.id[28].sub = "Sidearm ";
            exotic.kinetic.id[28].glimmer = 2500;
            exotic.kinetic.id[28].shards = 20;

            exotic.kinetic.id[29].name = "Ager's Scepter ";
            exotic.kinetic.id[29].sub = "Trace Rifle ";
            exotic.kinetic.id[29].glimmer = 2500;
            exotic.kinetic.id[29].shards = 20;

            exotic.kinetic.id[30].name = "Forerunner ";
            exotic.kinetic.id[30].sub = "Sidearm ";
            exotic.kinetic.id[30].glimmer = 2500;
            exotic.kinetic.id[30].shards = 20;

            exotic.kinetic.id[31].name = "Osteo Striga ";
            exotic.kinetic.id[31].sub = "Submachine Gun ";
            exotic.kinetic.id[31].glimmer = 2500;
            exotic.kinetic.id[31].shards = 20;



            exotic.energy.id[32].name = "Coldheart ";
            exotic.energy.id[32].sub = "Trace Rifle ";
            exotic.energy.id[32].glimmer = 2500;
            exotic.energy.id[32].shards = 20;

            exotic.energy.id[33].name = "Fighting Lion ";
            exotic.energy.id[33].sub = "Grenade Launcher";
            exotic.energy.id[33].glimmer = 2500;
            exotic.energy.id[33].shards = 20;

            exotic.energy.id[34].name = "Sunshot";
            exotic.energy.id[34].sub = "Hand Cannon";
            exotic.energy.id[34].glimmer = 2500;
            exotic.energy.id[34].shards = 20;


            exotic.energy.id[35].name = "Graviton Lance";
            exotic.energy.id[35].sub = "Pulse Rifle";
            exotic.energy.id[35].glimmer = 2500;
            exotic.energy.id[35].shards = 20;

            exotic.energy.id[36].name = "Skyburner's Oath ";
            exotic.energy.id[36].sub = "Scout Rifle";
            exotic.energy.id[36].glimmer = 2500;
            exotic.energy.id[36].shards = 20;

            exotic.energy.id[37].name = "Riskrunner ";
            exotic.energy.id[37].sub = "Submachine Gun";
            exotic.energy.id[37].glimmer = 2500;
            exotic.energy.id[37].shards = 20;


            exotic.energy.id[38].name = "Hard Light ";
            exotic.energy.id[38].sub = "Auto Rifle";
            exotic.energy.id[38].glimmer = 2500;
            exotic.energy.id[38].shards = 20;


            exotic.energy.id[39].name = "Merciless ";
            exotic.energy.id[39].sub = "Fusion Rifle";
            exotic.energy.id[39].glimmer = 2500;
            exotic.energy.id[39].shards = 20;


            exotic.energy.id[40].name = "Borealis ";
            exotic.energy.id[40].sub = "Sniper Rifle";
            exotic.energy.id[40].glimmer = 2500;
            exotic.energy.id[40].shards = 20;


            exotic.energy.id[41].name = "Prometheus Lens";
            exotic.energy.id[41].sub = "Trace Rifle";
            exotic.energy.id[41].glimmer = 2500;
            exotic.energy.id[41].shards = 20;


            exotic.energy.id[42].name = "Telesto ";
            exotic.energy.id[42].sub = "Fusion Rifle";
            exotic.energy.id[42].glimmer = 2500;
            exotic.energy.id[42].shards = 20;


            exotic.energy.id[43].name = "Polaris Lance ";
            exotic.energy.id[43].sub = "Scout Rifle";
            exotic.energy.id[43].glimmer = 2500;
            exotic.energy.id[43].shards = 20;


            exotic.energy.id[44].name = "Trinity Ghoul ";
            exotic.energy.id[44].sub = "Bow";
            exotic.energy.id[44].glimmer = 2500;
            exotic.energy.id[44].shards = 20;


            exotic.energy.id[45].name = "Wavesplitter ";
            exotic.energy.id[45].sub = "Trace Rifle";
            exotic.energy.id[45].glimmer = 2500;
            exotic.energy.id[45].shards = 20;


            exotic.energy.id[46].name = "Lord of Wolves ";
            exotic.energy.id[46].sub = "Shotgun";
            exotic.energy.id[46].glimmer = 2500;
            exotic.energy.id[46].shards = 20;


            exotic.energy.id[47].name = "Jotunn ";
            exotic.energy.id[47].sub = "Fusion Rifle";
            exotic.energy.id[47].glimmer = 2500;
            exotic.energy.id[47].shards = 20;


            exotic.energy.id[48].name = "Le Monarque ";
            exotic.energy.id[48].sub = "Bow";
            exotic.energy.id[48].glimmer = 2500;
            exotic.energy.id[48].shards = 20;


            exotic.energy.id[49].name = "Tarrabah ";
            exotic.energy.id[49].sub = "Submachine Gun";
            exotic.energy.id[49].glimmer = 2500;
            exotic.energy.id[49].shards = 20;


            exotic.energy.id[50].name = "Eriana's Vow";
            exotic.energy.id[50].sub = "Hand Cannon";
            exotic.energy.id[50].glimmer = 2500;
            exotic.energy.id[50].shards = 20;


            exotic.energy.id[51].name = "Divinity ";
            exotic.energy.id[51].sub = "Trace Rifle";
            exotic.energy.id[51].glimmer = 2500;
            exotic.energy.id[51].shards = 20;


            exotic.energy.id[52].name = "Symmetry ";
            exotic.energy.id[52].sub = "Scout Rifle";
            exotic.energy.id[52].glimmer = 2500;
            exotic.energy.id[52].shards = 20;


            exotic.energy.id[53].name = "Devil's Ruin ";
            exotic.energy.id[53].sub = "Sidearm";
            exotic.energy.id[53].glimmer = 2500;
            exotic.energy.id[53].shards = 20;


            exotic.energy.id[54].name = "Cloudstrike ";
            exotic.energy.id[54].sub = "Sniper Rifle";
            exotic.energy.id[54].glimmer = 2500;
            exotic.energy.id[54].shards = 20;


            exotic.energy.id[55].name = "Tommy's Matchbook ";
            exotic.energy.id[55].sub = "Auto Rifle";
            exotic.energy.id[55].glimmer = 2500;
            exotic.energy.id[55].shards = 20;


            exotic.energy.id[56].name = "The Fourth Horseman ";
            exotic.energy.id[56].sub = "Shotgun";
            exotic.energy.id[56].glimmer = 2500;
            exotic.energy.id[56].shards = 20;


            exotic.energy.id[57].name = "Ruinous Effigy ";
            exotic.energy.id[57].sub = "Trace Rifle";
            exotic.energy.id[57].glimmer = 2500;
            exotic.energy.id[57].shards = 20;


            exotic.energy.id[58].name = "Dualtiy ";
            exotic.energy.id[58].sub = "Shotgun";
            exotic.energy.id[58].glimmer = 2500;
            exotic.energy.id[58].shards = 20;


            exotic.energy.id[59].name = "Ticuu's Divination ";
            exotic.energy.id[59].sub = "Bow";
            exotic.energy.id[59].glimmer = 2500;
            exotic.energy.id[59].shards = 20;


            exotic.energy.id[60].name = "Vex Mythoclast ";
            exotic.energy.id[60].sub = "Fusion Rifle";
            exotic.energy.id[60].glimmer = 2500;
            exotic.energy.id[60].shards = 20;


            exotic.energy.id[61].name = "Lorentz Driver ";
            exotic.energy.id[61].sub = "Linear Fusion Rifle";
            exotic.energy.id[61].glimmer = 2500;
            exotic.energy.id[61].shards = 20;


            exotic.energy.id[62].name = "Dead Messenger ";
            exotic.energy.id[62].sub = "Grenade Launcher";
            exotic.energy.id[62].glimmer = 2500;
            exotic.energy.id[62].shards = 20;


            exotic.energy.id[63].name = "Collective Obligation ";
            exotic.energy.id[63].sub = "Pulse Rifle";
            exotic.energy.id[63].glimmer = 2500;
            exotic.energy.id[63].shards = 20;



            exotic.power.id[64].name = "The Prospector ";
            exotic.power.id[64].sub = "Grenade Launcher";
            exotic.power.id[64].glimmer = 2500;
            exotic.power.id[64].shards = 20;


            exotic.power.id[65].name = "Tractor Cannon ";
            exotic.power.id[65].sub = "Shotgun";
            exotic.power.id[65].glimmer = 2500;
            exotic.power.id[65].shards = 20;


            exotic.power.id[66].name = "Legend of Acrius ";
            exotic.power.id[66].sub = "Shotgun";
            exotic.power.id[66].glimmer = 2500;
            exotic.power.id[66].shards = 20;


            exotic.power.id[67].name = "D.A.R.C.I ";
            exotic.power.id[67].sub = "Sniper Rifle";
            exotic.power.id[67].glimmer = 2500;
            exotic.power.id[67].shards = 20;


            exotic.power.id[68].name = "The Wardcliff Coil ";
            exotic.power.id[68].sub = "Rocket Launcher";
            exotic.power.id[68].glimmer = 2500;
            exotic.power.id[68].shards = 20;


            exotic.power.id[69].name = "The Colony ";
            exotic.power.id[69].sub = "Grenade Launcher";
            exotic.power.id[69].glimmer = 2500;
            exotic.power.id[69].shards = 20;


            exotic.power.id[70].name = "Worldline Zero ";
            exotic.power.id[70].sub = "Sword";
            exotic.power.id[70].glimmer = 2500;
            exotic.power.id[70].shards = 20;


            exotic.power.id[71].name = "Sleeper Simulant ";
            exotic.power.id[71].sub = "Linear Fusion Rifle";
            exotic.power.id[71].glimmer = 2500;
            exotic.power.id[71].shards = 20;


            exotic.power.id[72].name = "Whisper of the Worm ";
            exotic.power.id[72].sub = "Sniper Rifle";
            exotic.power.id[72].glimmer = 2500;
            exotic.power.id[72].shards = 20;


            exotic.power.id[73].name = "One Thousand Voices ";
            exotic.power.id[73].sub = "Fusion Rifle";
            exotic.power.id[73].glimmer = 2500;
            exotic.power.id[73].shards = 20;


            exotic.power.id[74].name = "Two-Tailed Fox ";
            exotic.power.id[74].sub = "Linear Fusion Rifle";
            exotic.power.id[74].glimmer = 2500;
            exotic.power.id[74].shards = 20;

            exotic.power.id[75].name = "Black Talon ";
            exotic.power.id[75].sub = "Sword";
            exotic.power.id[75].glimmer = 2500;
            exotic.power.id[75].shards = 20;

            exotic.power.id[76].name = "The Queenbreaker ";
            exotic.power.id[76].sub = "Sniper Rifle";
            exotic.power.id[76].glimmer = 2500;
            exotic.power.id[76].shards = 20;

            exotic.power.id[77].name = "Thunderlord ";
            exotic.power.id[77].sub = "Machinegun";
            exotic.power.id[77].glimmer = 2500;
            exotic.power.id[77].shards = 20;

            exotic.power.id[78].name = "Anarchy ";
            exotic.power.id[78].sub = "Grenade Launcher";
            exotic.power.id[78].glimmer = 2500;
            exotic.power.id[78].shards = 20;

            exotic.power.id[79].name = "Truth ";
            exotic.power.id[79].sub = "Rocket Launcher";
            exotic.power.id[79].glimmer = 2500;
            exotic.power.id[79].shards = 20;

            exotic.power.id[80].name = "Deathbringer ";
            exotic.power.id[80].sub = "Rocket Launcher";
            exotic.power.id[80].glimmer = 2500;
            exotic.power.id[80].shards = 20;

            exotic.power.id[81].name = "Xenophage ";
            exotic.power.id[81].sub = "Machinegun";
            exotic.power.id[81].glimmer = 2500;
            exotic.power.id[81].shards = 20;

            exotic.power.id[82].name = "Leviathan's Breath ";
            exotic.power.id[82].sub = "Bow";
            exotic.power.id[82].glimmer = 2500;
            exotic.power.id[82].shards = 20;

            exotic.power.id[838].name = "Heir Apparent ";
            exotic.power.id[83].sub = "Machinegun";
            exotic.power.id[83].glimmer = 2500;
            exotic.power.id[83].shards = 20;

            exotic.power.id[84].name = "Eyes of Tomorrow ";
            exotic.power.id[84].sub = "Rocket Luancher";
            exotic.power.id[84].glimmer = 2500;
            exotic.power.id[84].shards = 20;

            exotic.power.id[85].name = "Salvation's Grip ";
            exotic.power.id[85].sub = "Grenade Launcher";
            exotic.power.id[85].glimmer = 2500;
            exotic.power.id[85].shards = 20;

            exotic.power.id[86].name = "The Lament ";
            exotic.power.id[86].sub = "Sword";
            exotic.power.id[86].glimmer = 2500;
            exotic.power.id[86].shards = 20;

            exotic.power.id[87].name = "Gjallarhorn ";
            exotic.power.id[87].sub = "Rocket Launcher";
            exotic.power.id[87].glimmer = 2500;
            exotic.power.id[87].shards = 20;

            exotic.power.id[88].name = "Parasite ";
            exotic.power.id[88].sub = "Grenade Launcher";
            exotic.power.id[88].glimmer = 2500;
            exotic.power.id[88].shards = 20;

            exotic.power.id[89].name = "Grand Overture ";
            exotic.power.id[89].sub = "Machinegun";
            exotic.power.id[89].glimmer = 2500;
            exotic.power.id[89].shards = 20;
        }

};

int main() {
    int ch1, ch2, ch3, srt_sub, xi;

    Filler fill;

    cout << "Press 1 to show weapons. \n";
    cout << "Press 2 to show armor. \n";
    cin >> ch1;

switch (ch1){
    case 1:
        cout << "Press 1 to show exotic weapons. \n";
        cout << "Press 2 to show legendary weapons. \n";
        cout << "Press 3 to show rare weapons. \n";
        cout << "Press 4 to show common weapons. \n";
        cin >> ch2;

        switch (ch2){
            case 1:
                cout << "Press 1 to show kinetic weapons. \n";
                cout << "Press 2 to show energy weapons. \n";
                cout << "Press 3 to show power weapons. \n";
                cin >> ch3;

                switch (ch3){
                    case 1:
                        for(int xi = 0; xi < num; xi++){
                            if(exotic.kinetic.id[xi].name != "") {
                                cout << "Name: " << exotic.kinetic.id[xi].name << "\n";
                                cout << "Sub:  " << exotic.kinetic.id[xi].sub << "\n";
                                cout << "Glimmer: " << exotic.kinetic.id[xi].glimmer << "\n";
                                cout << "Shards:  " << exotic.kinetic.id[xi].shards << "\n\n";
                            }
                        }
                        break;

                    case 2:
                        for(int xi = 0; xi < num; xi++){
                            if(exotic.energy.id[xi].name != "") {
                                cout << "Name: " << exotic.energy.id[xi].name << "\n";
                                cout << "Sub:  " << exotic.energy.id[xi].sub << "\n";
                                cout << "Glimmer: " << exotic.energy.id[xi].glimmer << "\n";
                                cout << "Shards:  " << exotic.energy.id[xi].shards << "\n\n";
                            }
                        }
                        break;

                    case 3:
                        for(int xi = 0; xi < num; xi++){
                            if(exotic.power.id[xi].name != "") {
                                cout << "Name: " << exotic.power.id[xi].name << "\n";
                                cout << "Sub:  " << exotic.power.id[xi].sub << "\n";
                                cout << "Glimmer: " << exotic.power.id[xi].glimmer << "\n";
                                cout << "Shards:  " << exotic.power.id[xi].shards << "\n\n";
                            }
                        }
                        break;
                }

                break;

            case 2:
                break;

            case 3:
                break;

            case 4:
                break;

        }

        break;

    case 2:
        break;
}




    return EXIT_SUCCESS;
}
