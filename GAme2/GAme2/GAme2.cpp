#include <iostream>
using namespace std;

//Текстовая новела 
// Про остров сокровищ 
// Главные места 
//1. Корабль 2.Остров  3. Маяк 4. Лес
// Механика Счётчик,переменная для её tresure.



int main() {
    int choice, treasure = 0;

    // Ты стоишь на палубе маленькой шхуны, пробираясь сквозь туман. Ветер свистит в парусах, а волны плещутся о борт. Задача - добраться до Острова Сокровищ, где, по легенде, спрятан клад пирата Блэка. Но что-то не так...

    cout << "You stand on the deck of a small schooner, navigating through the fog. The wind howls in the sails, and waves splash against the hull. Your task is to reach Treasure Island, where, according to legend, the treasure of Blackbeard the pirate is hidden. But something is wrong...\n\n";

    //Внезапно туман рассеивается, и ты видишь...
    cout << "> Suddenly the fog clears, and you see...\n\n";

    //1. ...огромный корабль с черным флагом, на котором виднеются пушки.На борту - грозные пираты.
    cout << "1. ...a huge ship with a black flag, cannons are visible on it. Ghastly pirates are on board.\n";

    //2. ...маленький остров, похожий на  скелет морского чудовища.Он окружен  рифами.
    cout << "2. ...a small island, resembling the skeleton of a sea monster. It is surrounded by reefs.\n\n";

    //Введи номер варианта, чтобы продолжить историю:
    cout << "Enter the number of the option to continue the story: ";
    cin >> choice;

    if (choice == 1) {

        //\nПираты с  черного  корабля  направляют  на  тебя  пушки. Ты  решаешь...
        cout << "\nPirates from the black ship point their cannons at you. You decide...\n\n";

        //1. Сдаться и  попросить  пощады.
        cout << "1. Surrender and ask for mercy.\n";

        //2. Вступить в  бой,  используя  все  свои  силы.
        cout << "2. Engage in battle, using all your strength.\n\n";

        
        //Введи номер варианта:
        cout << "Enter the number of the option: ";
        cin >> choice;

        if (choice == 1) {

            //Пираты  берут  тебя  в  плен.  Ты  никогда  не  узнаешь,  где  спрятан  клад.
            cout << "\nThe pirates take you captive. You will never know where the treasure is hidden. \n";

            //Конец игры!
            cout << "Game Over!\n";
        }
        else if (choice == 2) {

            //Ты  вступаешь  в  бой,  но  силы  неравны.  Пираты  топят  твою  шхуну.
            cout << "\nYou engage in battle, but the forces are uneven. The pirates sink your schooner. \n";

            //Ты погибаешь.
            cout << "You perish. \n";

            //Конец игры!
            cout << "Game Over!\n";
        }
        else {

            //Неверный выбор!
            cout << "\nWrong choice!\n";
        }

    }
    else if (choice == 2) {

        //Ты  подходишь  ближе  к  острову,  покрытому  густым  лесом.  Вдалеке  виднеется  старый  деревянный  маяк.  Что  ты  делаешь?
        cout << "\nYou approach the island, covered with a dense forest. A  old wooden lighthouse is visible in the distance. What do you do?\n\n";

        //1. Идешь  к  маяку,  надеясь  найти  помощь  или  подсказку.
        cout << "1. Go to the lighthouse, hoping to find help or a clue.\n";

        //2. Ищешь  клад  в  лесу.
        cout << "2. Look for treasure in the forest. \n\n";

        //Введи номер варианта:
        cout << "Enter the number of the option: ";
        cin >> choice;

        if (choice == 1) {

            //Ты  подходишь  к  маяку,  но  внутри  его  нет  никого,  а  на  стене  найдена  старая  карта.  На  ней  отмечен  крест  на  самом  верху  острова.
            cout << "\nYou approach the lighthouse, but there is no one inside, and an old map is found on the wall. It shows a cross at the top of the island. \n";

            //Ты  решаешь  подняться  на  вершину  острова,  чтобы  найти  клад.
            cout << "You decide to climb to the top of the island to find the treasure. \n";
            treasure = 1;
        }
        else if (choice == 2) {

            //Ты  бредешь  по  лесу,  но  ничего  не  находишь.
            cout << "\nYou wander through the forest, but find nothing. \n";

            //Время  идёт,  и  ты  понимаешь,  что  потерял  дорогу.  
            cout << "Time passes, and you realize you've lost your way. \n";

            //Ты  никогда  не  найдёшь  клад.
            cout << "You will never find the treasure. \n";

            //Конец игры!
            cout << "Game Over!\n";
        }
        else {

            //Неверный выбор!
            cout << "\nWrong choice!\n";
        }
    }
    else {
        //Неверный выбор!
        cout << "\nWrong choice!\n";
    }

    if (treasure == 1) {

        //Ты  поднимаешься  на  вершину  острова.  Там  ты  находишь  сундук,  полный  золотых  монет.
        cout << "\nYou climb to the top of the island.  There, you find a chest full of gold coins.  \n";

        //Ты  богат!
        cout << "You are rich! \n";

        //Конец игры!
        cout << "Game Over!\n";

    }

    return 0;
}
