#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
void header();
void loading();                             //kill enemies no matter what is happening in game you will win just do it 
string mainMenu();
void mainOptions(string);
void maze();
void keys();
void instructions();
void gotoxy(int, int);
char getCharAtxy(short int, short int);
void printPlayer();
void printEnemies();
void eraseEnemies(int, int);
void movePlayerLeft();
void movePlayerRight();
void movePlayerUp();
void movePlayerDown();
void erasePlayer();
void generateBullet();
void moveBullet();
void printBullet(int x, int y);
void eraseBullet(int x, int y);
void makeBulletInactive(int idx);
void bulletCollideWithEnemy();
void printScore();
void printHealth();
void enemyKilled();
void gameOverLose();
void gameOverWin();
void enemyBullets();
void moveEnemyBullets();
void printEnemyBullet(int x, int y);
void eraseEnemyBullet(int x, int y);
void makeEnemyBulletInactive(int idx);
bool gameRunning = false;
// My Player Warrior
int playerX = 60, playerY = 8;
char head = 2, body = 219, arm = 26, leg = 193;
char player1[4] = {' ', head, ' ', ' '};
char player2[4] = {body, body, body, arm};
char player3[4] = {leg, ' ', leg, ' '};
// Enemy Number 1 Tank
int enemyTank1X = 140, enemyTank1Y = 8;
char box = 219, head1 = 30;
char enemyTank1[6] = {' ', ' ', ' ', ' ', head1, ' '};
char enemyTank2[6] = {'<', '-', '-', box, box, box};
char enemyTank3[6] = {' ', ' ', ' ', '0', ' ', '0'};
// Enemy Number 2 Tank
int enemyTank2X = 140, enemyTank2Y = 15;
// Enemy Number 3 Warrior
int enemyWarriorX = 140, enemyWarriorY = 22;
char head2 = 4, body2 = 219, arm2 = 17, leg2 = 193;
char enemyWarrior1[6] = {' ', ' ', ' ', head2, ' ', ' '};
char enemyWarrior2[6] = {arm2, arm2, body2, body2, body2, ' '};
char enemyWarrior3[6] = {' ', ' ', leg2, ' ', leg2, ' '};
// Enemy Number 4 Robot
int enemyRobot1X = 140, enemyRobot1Y = 29;
// Enemy Number 5 Robot
int enemyRobot2X = 140, enemyRobot2Y = 36;
char head3 = 223, body3 = 219, arm3 = 187, leg3 = 202;
char enemyRobot1[6] = {' ', ' ', head3, head3, ' '};
char enemyRobot2[6] = {arm3, body3, body3, body3, body3};
char enemyRobot3[6] = {' ', leg3, ' ', ' ', leg3};
int bulletX[100];
int bulletY[100];
bool isBulletActive[100];
int bulletCount = 0, score = 0, playerHealth = 10, enemyHealth1 = 10, enemyHealth2 = 10, enemyHealth3 = 10, enemyHealth4 = 10, enemyHealth5 = 10;
int tank1BulletX[100], tank2BulletX[100], warriorBulletX[100], robo1BulletX[100], robo2BulletX[100];
int tank1BulletY[100], tank2BulletY[100], warriorBulletY[100], robo1BulletY[100], robo2BulletY[100];
bool tank1BulletActive[100], tank2BulletActive[100], warriorBulletActive[100], robo1BulletActive[100], robo2BulletActive[100];
int tank1BulletCount = 0, tank2BulletCount = 0, warriorBulletCount = 0, robo1BulletCount = 0, robo2BulletCount = 0;
main()
{
    loading();
    header();
    string mainChoice = mainMenu();
    mainOptions(mainChoice);
    maze();
    printPlayer();
    printEnemies();
    while (gameRunning)
    {
        printScore();
        printHealth();
        enemyKilled();
        if (GetAsyncKeyState(VK_LEFT))
        {
            movePlayerLeft();
        }
        else if (GetAsyncKeyState(VK_RIGHT))
        {
            movePlayerRight();
        }
        else if (GetAsyncKeyState(VK_UP))
        {
            movePlayerUp();
        }
        else if (GetAsyncKeyState(VK_DOWN))
        {
            movePlayerDown();
        }
        else if (GetAsyncKeyState(VK_SPACE))
        {
            generateBullet();
        }
        moveBullet();
        enemyBullets();
        moveEnemyBullets();
        bulletCollideWithEnemy();
        Sleep(50);
    }
}
void header()
{
    system("cls");
    cout << " _______  _____      ____          _             _   _  " << endl;
    cout << "|__   __||  __ \\    / __ \\        | |     /\\    | \\ | |" << endl;
    cout << "   | |   | |__) |  | |  | |       | |    /  \\   |  \\| |   " << endl;
    cout << "   | |   |  _  /   | |  | |   _   | |   / /\\ \\  | . ` |   " << endl;
    cout << "   | |   | | \\ \\   | |__| |  | |__| |  / ____ \\ | |\\  |    " << endl;
    cout << "   |_|   |_|  \\_\\   \\____/    \\____/  / /    \\_\\|_| \\_|  " << endl;
    cout << endl;
}
void loading()
{
    system("cls");
    cout << "      Yb,     ________" << endl;
    cout << "   Y8baad8888888888ba,_" << endl;
    cout << "aaad88888888888888888888b," << endl;
    cout << "`Y8888888888888888888888888b," << endl;
    cout << "   88888888888888888888888888ba," << endl;
    cout << "    Y888( )888888888888888888888ba, " << endl;
    cout << "    `Y888888888888888888888888888888ba,________,,aaddddbbbaa,,____,aaa," << endl;
    cout << "     `Y88888888888888888888888888888888888888888888888888888888888888888b," << endl;
    cout << "       Y88888888'888888888888888888888888888888888888888888888888888=88888b" << endl;
    cout << "       `88888888 88888888888888888888888888888888888888888888888888888=8888I" << endl;
    cout << "        Y888888 888888888888888888888888888888888888888888888888888888=888b" << endl;
    cout << "         Y88888P 888888888888888888888888888888888888888888888888888888=8888" << endl;
    cout << "                 Y88888888888888888888888888888888888888888888888888888=8888" << endl;
    cout << "                 (88888888888888888888888888888888888888888888888888888=8888" << endl;
    cout << "                 `88888888888888888888888888888888888888888888888888888=888(" << endl;
    cout << "                  `888888888888888888888888888888888888888888888888888=8888I" << endl;
    cout << "                   d88888888888888888888888888888888888888888888888888=8888I" << endl;
    cout << "                 ,d888888PY88888888888PY88888888P88888888888888888888=88888(" << endl;
    cout << "                d888888P'  Y8888888888'           888888888888888888=8888888" << endl;
    cout << "               d88888P     `Y888888888            I8888888 Y88888888=8888888" << endl;
    cout << "              d88888(,      `Y8888888P            `888888P  `Y888888 Y88888P" << endl;
    cout << "              `Y88888b,      `Y888888I             888888'   `888888  " << endl;
    cout << "                `Y88888b,  __ `888888'            ,88888P     888888" << endl;
    cout << "                  `Y88888bd88b `88888             I88888'     Y88888" << endl;
    cout << "                    `Y88888888b 88888             88888P      `88888" << endl;
    cout << "                      `Y888888888888P            d8888P'       88888," << endl;
    cout << "                         `    ,d8888I        ,ad888888'        Y8888I" << endl;
    cout << "                           ,a8888888'       d888888P'         ,d88888" << endl;
    cout << "                          d8888888'         88888888       ,d8888888P" << endl;
    cout << "                          88888888                         88888888'" << endl;
    cout << endl;
    cout << "PLEASE WAIT THE GAME IS LOADING" << endl;
    Sleep(500);
    cout << "Loading Complete " << endl;
    cout << "Press any key to continue " << endl;
    getch();
}
void maze()
{
    header();
    cout << "#####################################################################################################################################################" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#                                                                                                                                                   #" << endl;
    cout << "#####################################################################################################################################################" << endl;
}
string mainMenu()
{
    string choice;
    header();
    cout << "MAIN MENU" << endl;
    cout << "---------" << endl;
    cout << "1. Start " << endl;
    cout << "2. Keys  " << endl;
    cout << "3. Instructions " << endl;
    cout << "4. Exit " << endl;
    cout << endl;
    cout << "Enter your choice : ";
    cin >> choice;
    return choice;
}
void mainOptions(string option)
{
    if (option == "1")
    {
        gameRunning = true;
    }
    else if (option == "2")
    {
        keys();
        string mainChoice = mainMenu();
        mainOptions(mainChoice);
    }
    else if (option == "3")
    {
        instructions();
        string mainChoice = mainMenu();
        mainOptions(mainChoice);
    }
    else if (option == "4")
    {
        cout << "Press any key to exit " << endl;
        getch();
        system("exit");
        system("cls");
    }
    else
    {
        header();
        cout << "INVALID INPUT" << endl;
        cout << "Press any key to go back " << endl;
        getch();
        mainMenu();
    }
}
void keys()
{
    header();
    cout << "Move Up by    : Up key " << endl;
    cout << "Move Down by  : Down key " << endl;
    cout << "Move Right by : Right key " << endl;
    cout << "Move Left by  : Left key " << endl;
    cout << endl;
    cout << "Press any key to go back " << endl;
    getch();
}
void instructions()
{
    header();
    cout << "Kill or be killed " << endl;
    cout << endl;
    cout << "Press any key to go back " << endl;
    getch();
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT react = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &react) ? ci.Char.AsciiChar : ' ';
}
void printPlayer()
{
    gotoxy(playerX, playerY);
    for (int i = 0; i < 4; i++)
    {
        cout << player1[i];
    }
    gotoxy(playerX, playerY + 1);
    for (int i = 0; i < 4; i++)
    {
        cout << player2[i];
    }
    gotoxy(playerX, playerY + 2);
    for (int i = 0; i < 4; i++)
    {
        cout << player3[i];
    }
}
void printEnemies()
{
    // TAnk 1
    gotoxy(enemyTank1X, enemyTank1Y);
    for (int i = 0; i < 6; i++)
    {
        cout << enemyTank1[i];
    }
    gotoxy(enemyTank1X, enemyTank1Y + 1);
    for (int i = 0; i < 6; i++)
    {
        cout << enemyTank2[i];
    }
    gotoxy(enemyTank1X, enemyTank1Y + 2);
    for (int i = 0; i < 6; i++)
    {
        cout << enemyTank3[i];
    }
    // Tank 2
    gotoxy(enemyTank2X, enemyTank2Y);
    for (int i = 0; i < 6; i++)
    {
        cout << enemyTank1[i];
    }
    gotoxy(enemyTank2X, enemyTank2Y + 1);
    for (int i = 0; i < 6; i++)
    {
        cout << enemyTank2[i];
    }
    gotoxy(enemyTank2X, enemyTank2Y + 2);
    for (int i = 0; i < 6; i++)
    {
        cout << enemyTank3[i];
    }
    // Enemy 1
    gotoxy(enemyWarriorX, enemyWarriorY);
    for (int i = 0; i < 6; i++)
    {
        cout << enemyWarrior1[i];
    }
    gotoxy(enemyWarriorX, enemyWarriorY + 1);
    for (int i = 0; i < 6; i++)
    {
        cout << enemyWarrior2[i];
    }
    gotoxy(enemyWarriorX, enemyWarriorY + 2);
    for (int i = 0; i < 6; i++)
    {
        cout << enemyWarrior3[i];
    }
    // Robot 1
    gotoxy(enemyRobot1X, enemyRobot1Y);
    for (int i = 0; i < 6; i++)
    {
        cout << enemyRobot1[i];
    }
    gotoxy(enemyRobot1X, enemyRobot1Y + 1);
    for (int i = 0; i < 6; i++)
    {
        cout << enemyRobot2[i];
    }
    gotoxy(enemyRobot1X, enemyRobot1Y + 2);
    for (int i = 0; i < 6; i++)
    {
        cout << enemyRobot3[i];
    }
    // Robot 2
    gotoxy(enemyRobot2X, enemyRobot2Y);
    for (int i = 0; i < 6; i++)
    {
        cout << enemyRobot1[i];
    }
    gotoxy(enemyRobot2X, enemyRobot2Y + 1);
    for (int i = 0; i < 6; i++)
    {
        cout << enemyRobot2[i];
    }
    gotoxy(enemyRobot2X, enemyRobot2Y + 2);
    for (int i = 0; i < 6; i++)
    {
        cout << enemyRobot3[i];
    }
}
void eraseEnemies(int x, int y)
{
    gotoxy(x, y);
    for (int i = 0; i < 6; i++)
    {
        cout << " ";
    }
    gotoxy(x, y + 1);
    for (int i = 0; i < 6; i++)
    {
        cout << " ";
    }
    gotoxy(x, y + 2);
    for (int i = 0; i < 6; i++)
    {
        cout << " ";
    }
}
void movePlayerLeft()
{
    char next = getCharAtxy(playerX - 1, playerY);
    if (next == ' ')
    {
        erasePlayer();
        playerX = playerX - 1;
        printPlayer();
    }
}
void movePlayerRight()
{
    char next = getCharAtxy(playerX + 4, playerY);
    if (next == ' ')
    {
        erasePlayer();
        playerX = playerX + 1;
        printPlayer();
    }
    if (next == '.')
    {
        playerHealth--;
    }
}
void movePlayerUp()
{
    char next = getCharAtxy(playerX, playerY - 1);
    if (next == ' ')
    {
        erasePlayer();
        playerY = playerY - 1;
        printPlayer();
    }
}
void movePlayerDown()
{
    char next = getCharAtxy(playerX, playerY + 3);
    if (next == ' ')
    {
        erasePlayer();
        playerY = playerY + 1;
        printPlayer();
    }
}
void erasePlayer()
{
    gotoxy(playerX, playerY);
    for (int i = 0; i < 4; i++)
    {
        cout << " ";
    }
    gotoxy(playerX, playerY + 1);
    for (int i = 0; i < 4; i++)
    {
        cout << " ";
    }
    gotoxy(playerX, playerY + 2);
    for (int i = 0; i < 4; i++)
    {
        cout << " ";
    }
}
void generateBullet()
{
    bulletX[bulletCount] = (playerX + 5);
    bulletY[bulletCount] = playerY;
    isBulletActive[bulletCount] = true;
    gotoxy((playerX + 5), playerY);
    cout << "o";
    bulletCount++;
}
void moveBullet()
{
    for (int i = 0; i < bulletCount; i++)
    {
        if (isBulletActive[i] == true)
        {
            char next = getCharAtxy(bulletX[i] + 1, bulletY[i]);
            if (next != ' ')
            {
                eraseBullet(bulletX[i], bulletY[i]);
                makeBulletInactive(i);
            }
            else
            {
                eraseBullet(bulletX[i], bulletY[i]);
                bulletX[i] = bulletX[i] + 1;
                printBullet(bulletX[i], bulletY[i]);
            }
        }
    }
}
void printBullet(int x, int y)
{
    gotoxy(x, y);
    cout << "o";
}
void eraseBullet(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}
void makeBulletInactive(int idx)
{
    isBulletActive[idx] = false;
}
void bulletCollideWithEnemy()
{
    for (int i = 0; i < bulletCount; i++)
    {
        if (isBulletActive[i] == true)
        {
            if (bulletX[i] + 1 == enemyTank1X && (bulletY[i] == enemyTank1Y || bulletY[i] == enemyTank1Y + 2))
            {
                score++;
                enemyHealth1--;
                eraseBullet(bulletX[i] + 1, enemyTank1Y);
            }
            if (enemyTank1X - 1 == bulletX[i] && enemyTank1Y + 1 == bulletY[i])
            {
                score++;
                enemyHealth1--;
                eraseBullet(bulletX[i], bulletY[i]);
            }
            if (bulletX[i] + 1 == enemyTank2X && (bulletY[i] == enemyTank2Y || bulletY[i] == enemyTank2Y + 2))
            {
                score++;
                enemyHealth2--;
                eraseBullet(bulletX[i] + 1, enemyTank2Y);
            }
            if (enemyTank2X - 1 == bulletX[i] && enemyTank2Y + 1 == bulletY[i])
            {
                score++;
                enemyHealth2--;
                eraseBullet(bulletX[i], bulletY[i]);
            }
            if (bulletX[i] + 1 == enemyWarriorX && (bulletY[i] == enemyWarriorY || bulletY[i] == enemyWarriorY + 2))
            {
                score++;
                enemyHealth3--;
                eraseBullet(bulletX[i] + 1, enemyWarriorY);
            }
            if (enemyWarriorX - 1 == bulletX[i] && enemyWarriorY + 1 == bulletY[i])
            {
                score++;
                enemyHealth3--;
                eraseBullet(bulletX[i], bulletY[i]);
            }
            if (bulletX[i] + 1 == enemyRobot1X && (bulletY[i] == enemyRobot1Y || bulletY[i] == enemyRobot1Y + 2))
            {
                score++;
                enemyHealth4--;
                eraseBullet(bulletX[i] + 1, enemyRobot1Y);
            }
            if (enemyRobot1X - 1 == bulletX[i] && enemyRobot1Y + 1 == bulletY[i])
            {
                score++;
                enemyHealth4--;
                eraseBullet(bulletX[i], bulletY[i]);
            }
            if (bulletX[i] + 1 == enemyRobot2X && (bulletY[i] == enemyRobot2Y || bulletY[i] == enemyRobot2Y + 2))
            {
                score++;
                enemyHealth5--;
                eraseBullet(bulletX[i] + 1, enemyRobot2Y);
            }
            if (enemyRobot2X - 1 == bulletX[i] && enemyRobot2Y + 1 == bulletY[i])
            {
                score++;
                enemyHealth5--;
                eraseBullet(bulletX[i], bulletY[i]);
            }
        }
    }
}
void printScore()
{
    gotoxy(70, 5);
    cout << "Score : " << score;
}
void printHealth()
{
    if (playerHealth >= 0)
    {
        gotoxy(70, 3);
        cout << "Player Health : " << playerHealth << endl;
    }
    if (enemyHealth1 >= 0)
    {
        gotoxy(90, 1);
        cout << "Enemy 1 Health : " << enemyHealth1 << endl;
    }
    if (enemyHealth2 >= 0)
    {
        gotoxy(90, 2);
        cout << "Enemy 2 Health : " << enemyHealth2 << endl;
    }
    if (enemyHealth3 >= 0)
    {
        gotoxy(90, 3);
        cout << "Enemy 3 Health : " << enemyHealth3 << endl;
    }
    if (enemyHealth4 >= 0)
    {
        gotoxy(90, 4);
        cout << "Enemy 4 Health : " << enemyHealth4 << endl;
    }
    if (enemyHealth5 >= 0)
    {
        gotoxy(90, 5);
        cout << "Enemy 5 Health : " << enemyHealth5 << endl;
    }
}
void enemyKilled()
{
    if (enemyHealth1 == 0)
    {
        eraseEnemies(enemyTank1X, enemyTank1Y);
    }
    if (enemyHealth2 == 0)
    {
        eraseEnemies(enemyTank2X, enemyTank2Y);
    }
    if (enemyHealth3 == 0)
    {
        eraseEnemies(enemyWarriorX, enemyWarriorY);
    }
    if (enemyHealth4 == 0)
    {
        eraseEnemies(enemyRobot1X, enemyRobot1Y);
    }
    if (enemyHealth5 == 0)
    {
        eraseEnemies(enemyRobot2X, enemyRobot2Y);
    }
    if (enemyHealth1 <= 0 && enemyHealth2 <= 0 && enemyHealth3 <= 0 && enemyHealth4 <= 0 && enemyHealth5 <= 0)
    {
        gameRunning = false;
        gameOverWin();
    }
    if (playerHealth <= 0 && (enemyHealth1 > 0 || enemyHealth2 > 0 || enemyHealth3 > 0 || enemyHealth4 > 0 || enemyHealth5 > 0))
    {
        gameRunning = false;
        gameOverLose();
    }
}
void gameOverLose()
{
    header();
    cout << "#####################################################################################################################################" << endl;
    cout << "#                                                                                                                                   #" << endl;
    cout << "#         GGGGGGGGG        AAAAA        MMM           MMM    EEEEEEEEEE             YY     YY       OOOOOOOO        UU     UU       #" << endl;
    cout << "#       GG                AA   AA       MM M         M MM    EE                      YY   YY      OO        OO      UU     UU       #" << endl;
    cout << "#     GG                 AA     AA      MM   M     M   MM    EE                       YY YY      OO          OO     UU     UU       #" << endl;
    cout << "#    GG                 AA       AA     MM     M M     MM    EEEEEEE                   Y Y      OO            OO    UU     UU       #" << endl;
    cout << "#    GG     GGGGGGGGG   AA AAAAA AA     MM             MM    EE                        YYY       OO          OO     UU     UU       #" << endl;
    cout << "#     GG          GG    AA       AA     MM             MM    EE                        YYY         OO      OO        UU   UU        #" << endl;
    cout << "#       GGGGGGGGG       AA       AA     MM             MM    EEEEEEEEEE                YYY           OOOOOOO          UUUUU         #" << endl;
    cout << "#                                                                                                                                   #" << endl;
    cout << "#          OOOOOOOO        VV           VV    EEEEEEEEE    RRRRRRRR               LL       OOOOOOOO          SSSSSSSS  EEEEEEEE     #" << endl;
    cout << "#        OO        OO       VV         VV     EE           RR     RR              LL     OO        OO      SSS         EE           #" << endl;
    cout << "#       OO          OO       VV       VV      EE           RR    RR               LL    OO          OO    SSS          EE           #" << endl;
    cout << "#      OO            OO       VV     VV       EEEEEEE      RR   RR                LL   OO            OO      SSS       EEEEEEEE     #" << endl;
    cout << "#       OO          OO         VV   VV        EE           RR  RR                 LL    OO          OO           SSS   EE           #" << endl;
    cout << "#         OO      OO            VV VV         EE           RR    RR               LL      OO      OO               SSS EE           #" << endl;
    cout << "#           OOOOOOO              VVV          EEEEEEEEE    RR      RR             LLLLLLLLL OOOOOOO       SSSSSSSSSS   EEEEEEEEE    #" << endl;
    cout << "#                                                                                                                                   #" << endl;
    cout << "#####################################################################################################################################" << endl;
}
void gameOverWin()
{
    header();
    cout << "###################################################################################################################################" << endl;
    cout << "#                                                                                                                                 #" << endl;
    cout << "#         GGGGGGGGG        AAAAA        MMM           MMM    EEEEEEEEEE             YY     YY       OOOOOOOO        UU    UU      #" << endl;
    cout << "#       GG                AA   AA       MM M         M MM    EE                      YY   YY      OO        OO      UU    UU      #" << endl;
    cout << "#     GG                 AA     AA      MM   M     M   MM    EE                       YY YY      OO          OO     UU    UU      #" << endl;
    cout << "#    GG                 AA       AA     MM     M M     MM    EEEEEEE                   Y Y      OO            OO    UU    UU      #" << endl;
    cout << "#    GG     GGGGGGGGG   AA AAAAA AA     MM             MM    EE                        YYY       OO          OO     UU    UU      #" << endl;
    cout << "#     GG          GG    AA       AA     MM             MM    EE                        YYY         OO      OO        UU  UU       #" << endl;
    cout << "#       GGGGGGGGG       AA       AA     MM             MM    EEEEEEEEEE                YYY           OOOOOOO          UUUU        #" << endl;
    cout << "#                                                                                                                                 #" << endl;
    cout << "#          OOOOOOOO        VV           VV    EEEEEEEEE    RRRRRRRR                WW         WW     OOOOOOOO       NNN       NN  #" << endl;
    cout << "#        OO        OO       VV         VV     EE           RR     RR               WW         WW   OO        OO     NN NN     NN  #" << endl;
    cout << "#       OO          OO       VV       VV      EE           RR    RR                WW         WW  OO          OO    NN  NN    NN  #" << endl;
    cout << "#      OO            OO       VV     VV       EEEEEEE      RR   RR                 WW   WW    WW OO            OO   NN   NN   NN  #" << endl;
    cout << "#       OO          OO         VV   VV        EE           RR  RR                  WW  W   W  WW  OO          OO    NN    NN  NN  #" << endl;
    cout << "#         OO      OO            VV VV         EE           RR    RR                WW W     W WW    OO      OO      NN     NN NN  #" << endl;
    cout << "#           OOOOOOO              VVV          EEEEEEEEE    RR      RR              WWW       WWW      OOOOOOO       NN      NNNN  #" << endl;
    cout << "#                                                                                                                                 #" << endl;
    cout << "###################################################################################################################################" << endl;
}
void enemyBullets()
{
    char tank1 = getCharAtxy(enemyTank1X - 1, enemyTank1Y);
    char tank2 = getCharAtxy(enemyTank1X - 1, enemyTank1Y);
    char warrior1 = getCharAtxy(enemyTank1X - 1, enemyTank1Y);
    char robo1 = getCharAtxy(enemyTank1X - 1, enemyTank1Y);
    char robo2 = getCharAtxy(enemyTank1X - 1, enemyTank1Y);
    if (tank1 == ' ')
    {
        tank1BulletX[tank1BulletCount] = enemyTank1X - 1;
        tank1BulletY[tank1BulletCount] = enemyTank1Y;
        tank1BulletActive[tank1BulletCount] = true;
        gotoxy((enemyTank1X - 1), enemyTank1Y);
        cout << ".";
        tank1BulletCount++;
    }
    if (tank2 = ' ')
    {
        tank2BulletX[tank2BulletCount] = enemyTank2X - 1;
        tank2BulletY[tank2BulletCount] = enemyTank2Y;
        tank2BulletActive[tank2BulletCount] = true;
        gotoxy((enemyTank2X - 1), enemyTank2Y);
        cout << ".";
        tank2BulletCount++;
    }
    if (warrior1 == ' ')
    {
        warriorBulletX[warriorBulletCount] = enemyWarriorX - 1;
        warriorBulletY[warriorBulletCount] = enemyWarriorY;
        warriorBulletActive[warriorBulletCount] = true;
        gotoxy((enemyWarriorX - 1), enemyWarriorY);
        cout << ".";
        warriorBulletCount++;
    }
    if (robo1 == ' ')
    {
        robo1BulletX[robo1BulletCount] = enemyRobot1X - 1;
        robo1BulletY[robo1BulletCount] = enemyRobot1Y;
        robo1BulletActive[robo1BulletCount] = true;
        gotoxy((enemyRobot1X - 1), enemyRobot1Y);
        cout << ".";
        robo1BulletCount++;
    }
    if (robo2 == ' ')
    {
        robo2BulletX[robo2BulletCount] = enemyRobot2X - 1;
        robo2BulletY[robo2BulletCount] = enemyRobot2Y;
        robo2BulletActive[robo2BulletCount] = true;
        gotoxy((enemyRobot2X - 1), enemyRobot2Y);
        cout << ".";
        robo2BulletCount++;
    }
}
void moveEnemyBullets()
{
    for (int i = 0; i < tank1BulletCount; i++)
    {
        if (tank1BulletActive[i] == true)
        {
            char tank1 = getCharAtxy(tank1BulletX[i] - 1, tank1BulletY[i]);
            if (tank1 == 'o')
            {
                eraseEnemyBullet(tank1BulletX[i], tank1BulletY[i]);
                eraseBullet(bulletX[i], bulletY[i]);
                makeBulletInactive(i);
                tank1BulletActive[i] = false;
            }
            if (tank1 == ' ')
            {
                eraseEnemyBullet(tank1BulletX[i], tank1BulletY[i]);
                tank1BulletX[i]--;
                printEnemyBullet(tank1BulletX[i], tank1BulletY[i]);
            }
            else if (tank1 == '#')
            {
                eraseEnemyBullet(tank1BulletX[i], tank1BulletY[i]);
                tank1BulletActive[i] = false;
            }
            else
            {
                eraseEnemyBullet(tank1BulletX[i], tank1BulletY[i]);
                tank1BulletActive[i] = false;
            }
        }
    }
    for (int i = 0; i < tank2BulletCount; i++)
    {
        if (tank2BulletActive[i] == true)
        {
            char tank2 = getCharAtxy(tank2BulletX[i] - 1, tank2BulletY[i]);
            if (tank2 == 'o')
            {
                eraseEnemyBullet(tank2BulletX[i], tank2BulletY[i]);
                eraseBullet(bulletX[i], bulletY[i]);
                makeBulletInactive(i);
                tank2BulletActive[i] = false;
            }
            if (tank2 == ' ')
            {
                eraseEnemyBullet(tank2BulletX[i], tank2BulletY[i]);
                tank2BulletX[i]--;
                printEnemyBullet(tank2BulletX[i], tank2BulletY[i]);
            }
            else if (tank2 == '#')
            {
                eraseEnemyBullet(tank2BulletX[i], tank2BulletY[i]);
                tank2BulletActive[i] = false;
            }
            else
            {
                eraseEnemyBullet(tank2BulletX[i], tank2BulletY[i]);
                tank2BulletActive[i] = false;
            }
        }
    }
    for (int i = 0; i < warriorBulletCount; i++)
    {
        if (warriorBulletActive[i] == true)
        {
            char warrior1 = getCharAtxy(warriorBulletX[i] - 1, warriorBulletY[i]);
            if (warrior1 == 'o')
            {
                eraseEnemyBullet(warriorBulletX[i], warriorBulletY[i]);
                eraseBullet(bulletX[i], bulletY[i]);
                makeBulletInactive(i);
                warriorBulletActive[i] = false;
            }
            if (warrior1 == ' ')
            {
                eraseEnemyBullet(warriorBulletX[i], warriorBulletY[i]);
                warriorBulletX[i]--;
                printEnemyBullet(warriorBulletX[i], warriorBulletY[i]);
            }
            else if (warrior1 == '#')
            {
                eraseEnemyBullet(warriorBulletX[i], warriorBulletY[i]);
                warriorBulletActive[i] = false;
            }
            else
            {
                eraseEnemyBullet(warriorBulletX[i], warriorBulletY[i]);
                warriorBulletActive[i] = false;
            }
        }
    }
    for (int i = 0; i < robo1BulletCount; i++)
    {
        if (robo1BulletActive[i] == true)
        {
            char robo1 = getCharAtxy(robo1BulletX[i] - 1, robo1BulletY[i]);
            if (robo1 == 'o')
            {
                eraseEnemyBullet(robo1BulletX[i], robo1BulletY[i]);
                eraseBullet(bulletX[i], bulletY[i]);
                makeBulletInactive(i);
                robo1BulletActive[i] = false;
            }
            if (robo1 == ' ')
            {
                eraseEnemyBullet(robo1BulletX[i], robo1BulletY[i]);
                robo1BulletX[i]--;
                printEnemyBullet(robo1BulletX[i], robo1BulletY[i]);
            }
            else if (robo1 == '#')
            {
                eraseEnemyBullet(robo1BulletX[i], robo1BulletY[i]);
                robo1BulletActive[i] = false;
            }
            else
            {
                eraseEnemyBullet(robo1BulletX[i], robo1BulletY[i]);
                robo1BulletActive[i] = false;
            }
        }
    }
    for (int i = 0; i < robo2BulletCount; i++)
    {
        if (robo2BulletActive[i] == true)
        {
            char robo2 = getCharAtxy(robo2BulletX[i] - 1, robo2BulletY[i]);
            if (robo2 == 'o')
            {
                eraseEnemyBullet(robo2BulletX[i], robo2BulletY[i]);
                eraseBullet(bulletX[i], bulletY[i]);
                makeBulletInactive(i);
                robo2BulletActive[i] = false;
            }
            if (robo2 == ' ')
            {
                eraseEnemyBullet(robo2BulletX[i], robo2BulletY[i]);
                robo2BulletX[i]--;
                printEnemyBullet(robo2BulletX[i], robo2BulletY[i]);
            }
            else if (robo2 == '#')
            {
                eraseEnemyBullet(robo2BulletX[i], robo2BulletY[i]);
                robo2BulletActive[i] = false;
            }
            else
            {
                eraseEnemyBullet(robo2BulletX[i], robo2BulletY[i]);
                robo2BulletActive[i] = false;
            }
        }
    }
    if (playerHealth <= 0)
    {
        gameRunning = false;
        gameOverLose();
    }
}
void printEnemyBullet(int x, int y)
{
    gotoxy(x, y);
    cout << ".";
}
void eraseEnemyBullet(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}
