#include <SFML/Graphics.hpp>
#include <iostream>
#include<SFML/Audio.hpp>
using namespace std;
using namespace sf;
int main()
{
    while(true){
    //window
    RenderWindow window(VideoMode(800,600),"PACMAN GAME");
    window.setFramerateLimit(60);
    //window.setKeyRepeatEnabled(false);
    //map image
Texture texture1;
if(texture1.loadFromFile("Data/Map.png") == 0)
{
   return 1;
}
 Sprite sprite1;
sprite1.setTexture(texture1);
//rectangle texture
   sf::RectangleShape shape1;
   shape1.setSize(sf::Vector2f(600,450));
   shape1.setPosition(90,60);
   shape1.setTexture(&texture1);
   //walls
   sf::RectangleShape shape2;
   shape2.setSize(sf::Vector2f(600,20));
   shape2.setPosition(90,50);

   sf::RectangleShape shape3;
   shape3.setSize(sf::Vector2f(600,20));
   shape3.setPosition(90,500);

sf::RectangleShape shape4;
   shape4.setSize(sf::Vector2f(20,450));
   shape4.setPosition(90,50);

   sf::RectangleShape shape5;
   shape5.setSize(sf::Vector2f(20,450));
   shape5.setPosition(670,50);



sf::RectangleShape shape6;
   shape6.setSize(sf::Vector2f(187,15));
   shape6.setPosition(144,458);

   sf::RectangleShape shape7;
   shape7.setSize(sf::Vector2f(187,15));
   shape7.setPosition(440,458);

    sf::RectangleShape shape8;
   shape8.setSize(sf::Vector2f(10,50));
   shape8.setPosition(200,200);

 sf::RectangleShape shape9;
   shape9.setSize(sf::Vector2f(10,50));
   shape9.setPosition(565,200);

sf::RectangleShape shape10;
   shape10.setSize(sf::Vector2f(10,50));
   shape10.setPosition(565,290);

sf::RectangleShape shape11;
   shape11.setSize(sf::Vector2f(10,50));
   shape11.setPosition(200,290);

   sf::RectangleShape shape12;
   shape12.setSize(sf::Vector2f(20,50));
   shape12.setPosition(250,290);

   sf::RectangleShape shape13;
   shape13.setSize(sf::Vector2f(20,50));
   shape13.setPosition(505,290);

   sf::RectangleShape shape14;
   shape14.setSize(sf::Vector2f(20,100));
   shape14.setPosition(250,153);

   sf::RectangleShape shape15;
   shape15.setSize(sf::Vector2f(20,100));
   shape15.setPosition(505,153);

    sf::RectangleShape shape16;
   shape16.setSize(sf::Vector2f(70,30));
   shape16.setPosition(143,98);

    sf::RectangleShape shape17;
   shape17.setSize(sf::Vector2f(70,30));
   shape17.setPosition(570,98);

    sf::RectangleShape shape18;
   shape18.setSize(sf::Vector2f(90,30));
   shape18.setPosition(440,98);

    sf::RectangleShape shape19;
   shape19.setSize(sf::Vector2f(90,30));
   shape19.setPosition(250,98);

    sf::RectangleShape shape20;
   shape20.setSize(sf::Vector2f(80,12));
   shape20.setPosition(448,370);

    sf::RectangleShape shape21;
   shape21.setSize(sf::Vector2f(80,12));
   shape21.setPosition(250,370);

 sf::RectangleShape shape22;
   shape22.setSize(sf::Vector2f(80,17));
   shape22.setPosition(250,195);

    sf::RectangleShape shape23;
   shape23.setSize(sf::Vector2f(80,12));
   shape23.setPosition(446,195);

   sf::RectangleShape shape24;
   shape24.setSize(sf::Vector2f(110,12));
   shape24.setPosition(100,200);

   sf::RectangleShape shape25;
   shape25.setSize(sf::Vector2f(110,17));
   shape25.setPosition(100,238);

   sf::RectangleShape shape26;
   shape26.setSize(sf::Vector2f(110,12));
   shape26.setPosition(100,284);

   sf::RectangleShape shape27;
   shape27.setSize(sf::Vector2f(110,12));
   shape27.setPosition(100,324);

    sf::RectangleShape shape28;
   shape28.setSize(sf::Vector2f(110,12));
   shape28.setPosition(580,200);

   sf::RectangleShape shape29;
   shape29.setSize(sf::Vector2f(110,12));
   shape29.setPosition(580,238);

   sf::RectangleShape shape30;
   shape30.setSize(sf::Vector2f(110,12));
   shape30.setPosition(580,284);

   sf::RectangleShape shape31;
   shape31.setSize(sf::Vector2f(110,12));
   shape31.setPosition(580,324);

 sf::RectangleShape shape32;
   shape32.setSize(sf::Vector2f(134,12));
   shape32.setPosition(320,156);

   sf::RectangleShape shape33;
   shape33.setSize(sf::Vector2f(134,12));
   shape33.setPosition(320,288);

   sf::RectangleShape shape34;
   shape34.setSize(sf::Vector2f(134,12));
   shape34.setPosition(320,330);

   sf::RectangleShape shape35;
   shape35.setSize(sf::Vector2f(134,12));
   shape35.setPosition(320,415);

    sf::RectangleShape shape36;
   shape36.setSize(sf::Vector2f(20,50));
   shape36.setPosition(380,70);

    sf::RectangleShape shape37;
   shape37.setSize(sf::Vector2f(20,50));
   shape37.setPosition(380,160);

    sf::RectangleShape shape38;
   shape38.setSize(sf::Vector2f(20,50));
   shape38.setPosition(380,335);

    sf::RectangleShape shape39;
   shape39.setSize(sf::Vector2f(20,50));
   shape39.setPosition(380,415);

    sf::RectangleShape shape40;
   shape40.setSize(sf::Vector2f(20,50));
   shape40.setPosition(505,415);

    sf::RectangleShape shape41;
   shape41.setSize(sf::Vector2f(20,50));
   shape41.setPosition(250,415);

    sf::RectangleShape shape42;
   shape42.setSize(sf::Vector2f(20,50));
   shape42.setPosition(190,380);

    sf::RectangleShape shape43;
   shape43.setSize(sf::Vector2f(20,50));
   shape43.setPosition(570,380);

    sf::RectangleShape shape44;
   shape44.setSize(sf::Vector2f(50,14));
   shape44.setPosition(150,155);

 sf::RectangleShape shape45;
   shape45.setSize(sf::Vector2f(50,14));
   shape45.setPosition(580,155);

    sf::RectangleShape shape46;
   shape46.setSize(sf::Vector2f(50,14));
   shape46.setPosition(150,375);

    sf::RectangleShape shape47;
   shape47.setSize(sf::Vector2f(50,14));
   shape47.setPosition(580,375);

   sf::RectangleShape shape48;
   shape48.setSize(sf::Vector2f(50,14));
   shape48.setPosition(90,418);

   sf::RectangleShape shape49;
   shape49.setSize(sf::Vector2f(50,14));
   shape49.setPosition(640,417);

    sf::RectangleShape shape50;
   shape50.setSize(sf::Vector2f(50,9));
   shape50.setPosition(312,240);

    sf::RectangleShape shape51;
   shape51.setSize(sf::Vector2f(50,9));
   shape51.setPosition(412,240);

    sf::RectangleShape shape52;
   shape52.setSize(sf::Vector2f(9,50));
   shape52.setPosition(454,240);

    sf::RectangleShape shape53;
   shape53.setSize(sf::Vector2f(9,50));
   shape53.setPosition(318,240);
   //coins
   Texture coin;
   if(coin.loadFromFile("Data/Coin2.png") == 0){
    return 1;
   }
   Sprite coin01(coin);
		coin01.setScale(0.05f, 0.04f);
		coin01.setPosition(110, 75);

		Sprite coin02(coin);
		coin02.setScale(0.05f, 0.04f);
		coin02.setPosition(130, 75);

		Sprite coin03(coin);
		coin03.setScale(0.05f, 0.04f);
		coin03.setPosition(150, 75);

		Sprite coin04(coin);
		coin04.setScale(0.05f, 0.04f);
		coin04.setPosition(175, 75);

		Sprite coin05(coin);
		coin05.setScale(0.05f, 0.04f);
		coin05.setPosition(195, 75);

		Sprite coin06(coin);
		coin06.setScale(0.05f, 0.04f);
		coin06.setPosition(215, 75);

		Sprite coin07(coin);
		coin07.setScale(0.05f, 0.04f);
		coin07.setPosition(235, 75);

		Sprite coin08(coin);
		coin08.setScale(0.05f, 0.04f);
		coin08.setPosition(255, 75);

		Sprite coin09(coin);
		coin09.setScale(0.05f, 0.04f);
		coin09.setPosition(275, 75);

		Sprite coin010(coin);
		coin010.setScale(0.05f, 0.04f);
		coin010.setPosition(295, 75);

		Sprite coin011(coin);
		coin011.setScale(0.05f, 0.04f);
		coin011.setPosition(315, 75);

		Sprite coin012(coin);
		coin012.setScale(0.05f, 0.04f);
		coin012.setPosition(335, 75);

		Sprite coin013(coin);
		coin013.setScale(0.05f, 0.04f);
		coin013.setPosition(355, 95);

		Sprite coin014(coin);
		coin014.setScale(0.05f, 0.04f);
		coin014.setPosition(355, 115);

		Sprite coin015(coin);
		coin015.setScale(0.05f, 0.04f);
		coin015.setPosition(355,75);

		Sprite coin016(coin);
		coin016.setScale(0.05f, 0.04f);
		coin016.setPosition(415, 75);

		Sprite coin017(coin);
		coin017.setScale(0.05f, 0.04f);
		coin017.setPosition(435, 75);

		Sprite coin018(coin);
		coin018.setScale(0.05f, 0.04f);
		coin018.setPosition(455, 75);

		Sprite coin019(coin);
		coin019.setScale(0.05f, 0.04f);
		coin019.setPosition(475, 75);

		Sprite coin020(coin);
		coin020.setScale(0.05f, 0.04f);
		coin020.setPosition(495,75);


		Sprite coin021(coin);
		coin021.setScale(0.05f, 0.04f);
		coin021.setPosition(515, 75);

		Sprite coin022(coin);
		coin022.setScale(0.05f, 0.04f);
		coin022.setPosition(535, 75);

		Sprite coin023(coin);
		coin023.setScale(0.05f, 0.04f);
		coin023.setPosition(555, 75);

		Sprite coin024(coin);
		coin024.setScale(0.05f, 0.04f);
		coin024.setPosition(575, 75);

		Sprite coin025(coin);
		coin025.setScale(0.05f, 0.04f);
		coin025.setPosition(595, 75);

		Sprite coin026(coin);
		coin026.setScale(0.05f, 0.04f);
		coin026.setPosition(615, 75);

		Sprite coin027(coin);
		coin027.setScale(0.05f, 0.04f);
		coin027.setPosition(635, 75);

		Sprite coin028(coin);
		coin028.setScale(0.05f, 0.04f);
		coin028.setPosition(655, 75);

		Sprite coin029(coin);
		coin029.setScale(0.05f, 0.04f);
		coin029.setPosition(415, 95);

		Sprite coin030(coin);
		coin030.setScale(0.05f, 0.04f);
		coin030.setPosition(415, 115);

		Sprite coin031(coin);
		coin031.setScale(0.05f, 0.04f);
		coin031.setPosition(415, 135);

		Sprite coin032(coin);
		coin032.setScale(0.05f, 0.04f);
		coin032.setPosition(435, 135);

		Sprite coin033(coin);
		coin033.setScale(0.05f, 0.04f);
		coin033.setPosition(455, 135);

		Sprite coin034(coin);
		coin034.setScale(0.05f, 0.04f);
		coin034.setPosition(475, 135);

		Sprite coin035(coin);
		coin035.setScale(0.05f, 0.04f);
		coin035.setPosition(495, 135);

		Sprite coin036(coin);
		coin036.setScale(0.05f, 0.04f);
		coin036.setPosition(515, 135);

		Sprite coin037(coin);
		coin037.setScale(0.05f, 0.04f);
		coin037.setPosition(535, 135);

		Sprite coin038(coin);
		coin038.setScale(0.05f, 0.04f);
		coin038.setPosition(555, 135);

		Sprite coin039(coin);
		coin039.setScale(0.05f, 0.04f);
		coin039.setPosition(575, 135);

		Sprite coin040(coin);
		coin040.setScale(0.05f, 0.04f);
		coin040.setPosition(595, 135);

		Sprite coin041(coin);
		coin041.setScale(0.05f, 0.04f);
		coin041.setPosition(615, 135);

		Sprite coin042(coin);
		coin042.setScale(0.05f, 0.04f);
		coin042.setPosition(635, 135);

		Sprite coin043(coin);
		coin043.setScale(0.05f, 0.04f);
		coin043.setPosition(655, 135);

		Sprite coin044(coin);
		coin044.setScale(0.05f, 0.04f);
		coin044.setPosition(655, 115);

		Sprite coin045(coin);
		coin045.setScale(0.05f, 0.04f);
		coin045.setPosition(655, 95);

		Sprite coin046(coin);
		coin046.setScale(0.05f, 0.04f);
		coin046.setPosition(535, 95);

		Sprite coin047(coin);
		coin047.setScale(0.05f, 0.04f);
		coin047.setPosition(535, 115);

		Sprite coin048(coin);
		coin048.setScale(0.05f, 0.04f);
		coin048.setPosition(555, 115);

		Sprite coin049(coin);
		coin049.setScale(0.05f, 0.04f);
		coin049.setPosition(555, 95);

		Sprite coin050(coin);
		coin050.setScale(0.05f, 0.04f);
		coin050.setPosition(395, 135);

		Sprite coin051(coin);
		coin051.setScale(0.05f, 0.04f);
		coin051.setPosition(110, 95);


		Sprite coin0_51(coin);
		coin0_51.setScale(0.05f, 0.04f);
		coin0_51.setPosition(130, 95);


		Sprite coin0_52(coin);
		coin0_52.setScale(0.05f, 0.04f);
		coin0_52.setPosition(130, 115);

		Sprite coin052(coin);
		coin052.setScale(0.05f, 0.04f);
		coin052.setPosition(110, 115);

		Sprite coin053(coin);
		coin053.setScale(0.05f, 0.04f);
		coin053.setPosition(110, 135);

		Sprite coin054(coin);
		coin054.setScale(0.05f, 0.04f);
		coin054.setPosition(130, 135);

		Sprite coin055(coin);
		coin055.setScale(0.05f, 0.04f);
		coin055.setPosition(150, 135);

		Sprite coin056(coin);
		coin056.setScale(0.05f, 0.04f);
		coin056.setPosition(175, 135);

		Sprite coin057(coin);
		coin057.setScale(0.05f, 0.04f);
		coin057.setPosition(195, 135);

		Sprite coin058(coin);
		coin058.setScale(0.05f, 0.04f);
		coin058.setPosition(215, 135);

		Sprite coin059(coin);
		coin059.setScale(0.05f, 0.04f);
		coin059.setPosition(235, 135);

		Sprite coin060(coin);
		coin060.setScale(0.05f, 0.04f);
		coin060.setPosition(255, 135);

		Sprite coin061(coin);
		coin061.setScale(0.05f, 0.04f);
		coin061.setPosition(275, 135);

		Sprite coin062(coin);
		coin062.setScale(0.05f, 0.04f);
		coin062.setPosition(295, 135);

		Sprite coin063(coin);
		coin063.setScale(0.05f, 0.04f);
		coin063.setPosition(315, 135);

		Sprite coin064(coin);
		coin064.setScale(0.05f, 0.04f);
		coin064.setPosition(335, 135);

		Sprite coin065(coin);
		coin065.setScale(0.05f, 0.04f);
		coin065.setPosition(355, 135);

		Sprite coin066(coin);
		coin066.setScale(0.05f, 0.04f);
		coin066.setPosition(375, 135);

		Sprite coin067(coin);
		coin067.setScale(0.05f, 0.04f);
		coin067.setPosition(215, 95);

		Sprite coin068(coin);
		coin068.setScale(0.05f, 0.04f);
		coin068.setPosition(215, 115);

		Sprite coin069(coin);
		coin069.setScale(0.05f, 0.04f);
		coin069.setPosition(235, 95);

		Sprite coin070(coin);
		coin070.setScale(0.05f, 0.04f);
		coin070.setPosition(235, 115);

		Sprite coin071(coin);
		coin071.setScale(0.05f, 0.04f);
		coin071.setPosition(110, 155);

		Sprite coin072(coin);
		coin072.setScale(0.05f, 0.04f);
		coin072.setPosition(110, 170);


		Sprite coin0_71(coin);
		coin0_71.setScale(0.05f, 0.04f);
		coin0_71.setPosition(130, 155);

		Sprite coin0_72(coin);
		coin0_72.setScale(0.05f, 0.04f);
		coin0_72.setPosition(130, 170);

		Sprite coin073(coin);
		coin073.setScale(0.05f, 0.04f);
		coin073.setPosition(220, 155);

		Sprite coin074(coin);
		coin074.setScale(0.05f, 0.04f);
		coin074.setPosition(220, 170);

		Sprite coin075(coin);
		coin075.setScale(0.05f, 0.04f);
		coin075.setPosition(235, 170);

		Sprite coin076(coin);
		coin076.setScale(0.05f, 0.04f);
		coin076.setPosition(235, 155);

		Sprite coin077(coin);
		coin077.setScale(0.05f, 0.04f);
		coin077.setPosition(275, 155);

		Sprite coin078(coin);
		coin078.setScale(0.05f, 0.04f);
		coin078.setPosition(275, 170);

		Sprite coin079(coin);
		coin079.setScale(0.05f, 0.04f);
		coin079.setPosition(295, 170);

		Sprite coin080(coin);
		coin080.setScale(0.05f, 0.04f);
		coin080.setPosition(295, 155);

		Sprite coin081(coin);
		coin081.setScale(0.05f, 0.04f);
		coin081.setPosition(475, 155);

		Sprite coin082(coin);
		coin082.setScale(0.05f, 0.04f);
		coin082.setPosition(475, 170);

		Sprite coin083(coin);
		coin083.setScale(0.05f, 0.04f);
		coin083.setPosition(495, 155);

		Sprite coin084(coin);
		coin084.setScale(0.05f, 0.04f);
		coin084.setPosition(495, 170);

		Sprite coin085(coin);
		coin085.setScale(0.05f, 0.04f);
		coin085.setPosition(535, 155);

		Sprite coin086(coin);
		coin086.setScale(0.05f, 0.04f);
		coin086.setPosition(535, 170);

		Sprite coin087(coin);
		coin087.setScale(0.05f, 0.04f);
		coin087.setPosition(555, 155);

		Sprite coin088(coin);
		coin088.setScale(0.05f, 0.04f);
		coin088.setPosition(555, 170);




		Sprite coin0_89(coin);
		coin0_89.setScale(0.05f, 0.04f);
		coin0_89.setPosition(640, 95);


		Sprite coin0_88(coin);
		coin0_88.setScale(0.05f, 0.04f);
		coin0_88.setPosition(640, 115);


		Sprite coin089(coin);
		coin089.setScale(0.05f, 0.04f);
		coin089.setPosition(635, 155);

		Sprite coin090(coin);
		coin090.setScale(0.05f, 0.04f);
		coin090.setPosition(655, 170);

		Sprite coin091(coin);
		coin091.setScale(0.05f, 0.04f);
		coin091.setPosition(655, 155);

		Sprite coin092(coin);
		coin092.setScale(0.05f, 0.04f);
		coin092.setPosition(635, 170);

		//code Ahmed
		Sprite coin1(coin);
		coin1.setScale(0.05f, 0.04f);
		coin1.setPosition(403, 435);

		Sprite coin2(coin);
		coin2.setScale(0.05f, 0.04f);
		coin2.setPosition(424, 435);

		Sprite coin3(coin);
		coin3.setScale(0.05f, 0.04f);
		coin3.setPosition(446, 435);

		Sprite coin4(coin);
		coin4.setScale(0.05f, 0.04f);
		coin4.setPosition(467, 435);

		Sprite coin5(coin);
		coin5.setScale(0.05f, 0.04f);
		coin5.setPosition(488, 435);

		Sprite coin6(coin);
		coin6.setScale(0.05f, 0.04f);
		coin6.setPosition(530, 435);


		Sprite coin7(coin);
		coin7.setScale(0.05f, 0.04f);
		coin7.setPosition(550, 435);


		Sprite coin8(coin);
		coin8.setScale(0.05f, 0.04f);
		coin8.setPosition(570, 435);

		Sprite coin9(coin);
		coin9.setScale(0.05f, 0.04f);
		coin9.setPosition(590, 435);

		Sprite coin10(coin);
		coin10.setScale(0.05f, 0.04f);
		coin10.setPosition(610, 435);

		Sprite coin11(coin);
		coin11.setScale(0.05f, 0.04f);
		coin11.setPosition(630, 435);

		Sprite coin12(coin);
		coin12.setScale(0.05f, 0.04f);
		coin12.setPosition(650, 435);

		Sprite coin13(coin);
		coin13.setScale(0.05f, 0.04f);
		coin13.setPosition(358, 435);

		Sprite coin14(coin);
		coin14.setScale(0.05f, 0.04f);
		coin14.setPosition(338, 435);

		Sprite coin15(coin);
		coin15.setScale(0.05f, 0.04f);
		coin15.setPosition(318, 435);

		Sprite coin16(coin);
		coin16.setScale(0.05f, 0.04f);
		coin16.setPosition(298, 435);

		Sprite coin17(coin);
		coin17.setScale(0.05f, 0.04f);
		coin17.setPosition(278, 435);

		Sprite coin18(coin);
		coin18.setScale(0.05f, 0.04f);
		coin18.setPosition(230, 435);

		Sprite coin19(coin);
		coin19.setScale(0.05f, 0.04f);
		coin19.setPosition(210, 435);

		Sprite coin20(coin);
		coin20.setScale(0.05f, 0.04f);
		coin20.setPosition(190, 435);

		Sprite coin21(coin);
		coin21.setScale(0.05f, 0.04f);
		coin21.setPosition(170, 435);


		Sprite coin22(coin);
		coin22.setScale(0.05f, 0.04f);
		coin22.setPosition(150, 435);


		Sprite coin23(coin);
		coin23.setScale(0.05f, 0.04f);
		coin23.setPosition(130, 435);


		Sprite coin24(coin);
		coin24.setScale(0.05f, 0.04f);
		coin24.setPosition(111, 435);

		Sprite coin25(coin);
		coin25.setScale(0.05f, 0.04f);
		coin25.setPosition(125, 460);

		Sprite coin26(coin);
		coin26.setScale(0.05f, 0.04f);
		coin26.setPosition(109, 460);

		Sprite coin27(coin);
		coin27.setScale(0.05f, 0.04f);
		coin27.setPosition(125, 480);

		Sprite coin28(coin);
		coin28.setScale(0.05f, 0.04f);
		coin28.setPosition(105, 480);

		Sprite coin29(coin);
		coin29.setScale(0.05f, 0.04f);
		coin29.setPosition(145, 480);

		Sprite coin30(coin);
		coin30.setScale(0.05f, 0.04f);
		coin30.setPosition(165, 480);

		Sprite coin31(coin);
		coin31.setScale(0.05f, 0.04f);
		coin31.setPosition(185, 480);


		Sprite coin32(coin);
		coin32.setScale(0.05f, 0.04f);
		coin32.setPosition(205, 480);

		Sprite coin33(coin);
		coin33.setScale(0.05f, 0.04f);
		coin33.setPosition(225, 480);

		Sprite coin34(coin);
		coin34.setScale(0.05f, 0.04f);
		coin34.setPosition(245, 480);

		Sprite coin35(coin);
		coin35.setScale(0.05f, 0.04f);
		coin35.setPosition(265, 480);

		Sprite coin36(coin);
		coin36.setScale(0.05f, 0.04f);
		coin36.setPosition(285, 480);

		Sprite coin37(coin);
		coin37.setScale(0.05f, 0.04f);
		coin37.setPosition(305, 480);

		Sprite coin38(coin);
		coin38.setScale(0.05f, 0.04f);
		coin38.setPosition(325, 480);

		Sprite coin39(coin);
		coin39.setScale(0.05f, 0.04f);
		coin39.setPosition(335, 460);

		Sprite coin40(coin);
		coin40.setScale(0.05f, 0.04f);
		coin40.setPosition(355, 460);

		Sprite coin41(coin);
		coin41.setScale(0.05f, 0.04f);
		coin41.setPosition(402, 460);

		Sprite coin42(coin);
		coin42.setScale(0.05f, 0.04f);
		coin42.setPosition(421, 460);

		Sprite coin43(coin);
		coin43.setScale(0.05f, 0.04f);
		coin43.setPosition(635, 460);

		Sprite coin44(coin);
		coin44.setScale(0.05f, 0.04f);
		coin44.setPosition(655, 460);

		Sprite coin45(coin);
		coin45.setScale(0.05f, 0.04f);
		coin45.setPosition(345, 480);

		Sprite coin46(coin);
		coin46.setScale(0.05f, 0.04f);
		coin46.setPosition(365, 480);

		Sprite coin47(coin);
		coin47.setScale(0.05f, 0.04f);
		coin47.setPosition(385, 480);

		Sprite coin48(coin);
		coin48.setScale(0.05f, 0.04f);
		coin48.setPosition(405, 480);

		Sprite coin49(coin);
		coin49.setScale(0.05f, 0.04f);
		coin49.setPosition(425, 480);

		Sprite coin50(coin);
		coin50.setScale(0.05f, 0.04f);
		coin50.setPosition(445, 480);

		Sprite coin51(coin);
		coin51.setScale(0.05f, 0.04f);
		coin51.setPosition(465, 480);

		Sprite coin52(coin);
		coin52.setScale(0.05f, 0.04f);
		coin52.setPosition(485, 480);

		Sprite coin53(coin);
		coin53.setScale(0.05f, 0.04f);
		coin53.setPosition(505, 480);

		Sprite coin54(coin);
		coin54.setScale(0.05f, 0.04f);
		coin54.setPosition(525, 480);

		Sprite coin55(coin);
		coin55.setScale(0.05f, 0.04f);
		coin55.setPosition(545, 480);

		Sprite coin56(coin);
		coin56.setScale(0.05f, 0.04f);
		coin56.setPosition(569, 480);

		Sprite coin57(coin);
		coin57.setScale(0.05f, 0.04f);
		coin57.setPosition(588, 480);

		Sprite coin58(coin);
		coin58.setScale(0.05f, 0.04f);
		coin58.setPosition(612, 480);

		Sprite coin59(coin);
		coin59.setScale(0.05f, 0.04f);
		coin59.setPosition(633, 480);

		Sprite coin60(coin);
		coin60.setScale(0.05f, 0.04f);
		coin60.setPosition(655, 480);

		Sprite coin61(coin);
		coin61.setScale(0.05f, 0.04f);
		coin61.setPosition(144, 415);

		Sprite coin62(coin);
		coin62.setScale(0.05f, 0.04f);
		coin62.setPosition(164, 415);

		Sprite coin63(coin);
		coin63.setScale(0.05f, 0.04f);
		coin63.setPosition(210, 415);

		Sprite coin64(coin);
		coin64.setScale(0.05f, 0.04f);
		coin64.setPosition(230, 415);

		Sprite coin65(coin);
		coin65.setScale(0.05f, 0.04f);
		coin65.setPosition(277, 415);

		Sprite coin66(coin);
		coin66.setScale(0.05f, 0.04f);
		coin66.setPosition(295, 415);

		Sprite coin67(coin);
		coin67.setScale(0.05f, 0.04f);
		coin67.setPosition(465, 415);

		Sprite coin68(coin);
		coin68.setScale(0.05f, 0.04f);
		coin68.setPosition(485, 415);

		Sprite coin69(coin);
		coin69.setScale(0.05f, 0.04f);
		coin69.setPosition(530, 415);

		Sprite coin70(coin);
		coin70.setScale(0.05f, 0.04f);
		coin70.setPosition(550, 415);

		Sprite coin71(coin);
		coin71.setScale(0.05f, 0.04f);
		coin71.setPosition(594, 415);

		Sprite coin72(coin);
		coin72.setScale(0.05f, 0.04f);
		coin72.setPosition(615, 415);

		Sprite coin73(coin);
		coin73.setScale(0.05f, 0.04f);
		coin73.setPosition(107, 395);

		Sprite coin74(coin);
		coin74.setScale(0.05f, 0.04f);
		coin74.setPosition(128, 395);

		Sprite coin75(coin);
		coin75.setScale(0.05f, 0.04f);
		coin75.setPosition(150, 395);

		Sprite coin76(coin);
		coin76.setScale(0.05f, 0.04f);
		coin76.setPosition(170, 395);

		Sprite coin77(coin);
		coin77.setScale(0.05f, 0.04f);
		coin77.setPosition(210, 395);

		Sprite coin78(coin);
		coin78.setScale(0.05f, 0.04f);
		coin78.setPosition(230, 395);


		Sprite coin79(coin);
		coin79.setScale(0.05f, 0.04f);
		coin79.setPosition(250, 395);

		Sprite coin80(coin);
		coin80.setScale(0.05f, 0.04f);
		coin80.setPosition(270, 395);

		Sprite coin81(coin);
		coin81.setScale(0.05f, 0.04f);
		coin81.setPosition(290, 395);


		Sprite coin82(coin);
		coin82.setScale(0.05f, 0.04f);
		coin82.setPosition(310, 395);

		Sprite coin83(coin);
		coin83.setScale(0.05f, 0.04f);
		coin83.setPosition(330, 395);


		Sprite coin84(coin);
		coin84.setScale(0.05f, 0.04f);
		coin84.setPosition(350, 395);


		Sprite coin85(coin);
		coin85.setScale(0.05f, 0.04f);
		coin85.setPosition(370, 395);

		Sprite coin86(coin);
		coin86.setScale(0.05f, 0.04f);
		coin86.setPosition(390, 395);

		Sprite coin87(coin);
		coin87.setScale(0.05f, 0.04f);
		coin87.setPosition(410, 395);

		Sprite coin88(coin);
		coin88.setScale(0.05f, 0.04f);
		coin88.setPosition(430, 395);

		Sprite coin89(coin);
		coin89.setScale(0.05f, 0.04f);
		coin89.setPosition(450, 395);

		Sprite coin90(coin);
		coin90.setScale(0.05f, 0.04f);
		coin90.setPosition(470, 395);

		Sprite coin91(coin);
		coin91.setScale(0.05f, 0.04f);
		coin91.setPosition(490, 395);

		Sprite coin92(coin);
		coin92.setScale(0.05f, 0.04f);
		coin92.setPosition(510, 395);

		Sprite coin93(coin);
		coin93.setScale(0.05f, 0.04f);
		coin93.setPosition(530, 395);

		Sprite coin94(coin);
		coin94.setScale(0.05f, 0.04f);
		coin94.setPosition(550, 395);

		Sprite coin95(coin);
		coin95.setScale(0.05f, 0.04f);
		coin95.setPosition(602, 395);

		Sprite coin96(coin);
		coin96.setScale(0.05f, 0.04f);
		coin96.setPosition(623, 395);

		Sprite coin97(coin);
		coin97.setScale(0.05f, 0.04f);
		coin97.setPosition(645, 395);

		Sprite coin98(coin);
		coin98.setScale(0.05f, 0.04f);
		coin98.setPosition(665, 395);

		Sprite coin99(coin);
		coin99.setScale(0.05f, 0.04f);
		coin99.setPosition(110, 375);

		Sprite coin100(coin);
		coin100.setScale(0.05f, 0.04f);
		coin100.setPosition(130, 375);


		Sprite coin101(coin);
		coin101.setScale(0.05f, 0.04f);
		coin101.setPosition(210, 375);

		Sprite coin102(coin);
		coin102.setScale(0.05f, 0.04f);
		coin102.setPosition(230, 375);

		Sprite coin103(coin);
		coin103.setScale(0.05f, 0.04f);
		coin103.setPosition(342, 375);

		Sprite coin104(coin);
		coin104.setScale(0.05f, 0.04f);
		coin104.setPosition(362, 375);

		Sprite coin105(coin);
		coin105.setScale(0.05f, 0.04f);
		coin105.setPosition(410, 375);


		Sprite coin106(coin);
		coin106.setScale(0.05f, 0.04f);
		coin106.setPosition(427, 375);

		Sprite coin107(coin);
		coin107.setScale(0.05f, 0.04f);
		coin107.setPosition(530, 375);

		Sprite coin108(coin);
		coin108.setScale(0.05f, 0.04f);
		coin108.setPosition(550, 375);

		Sprite coin109(coin);
		coin109.setScale(0.05f, 0.04f);
		coin109.setPosition(645, 375);

		Sprite coin110(coin);
		coin110.setScale(0.05f, 0.04f);
		coin110.setPosition(665, 375);

		Sprite coin111(coin);
		coin111.setScale(0.05f, 0.04f);
		coin111.setPosition(110, 355);

		Sprite coin112(coin);
		coin112.setScale(0.05f, 0.04f);
		coin112.setPosition(130, 355);

		Sprite coin113(coin);
		coin113.setScale(0.05f, 0.04f);
		coin113.setPosition(150, 355);

		Sprite coin114(coin);
		coin114.setScale(0.05f, 0.04f);
		coin114.setPosition(170, 355);

		Sprite coin115(coin);
		coin115.setScale(0.05f, 0.04f);
		coin115.setPosition(190, 355);

		Sprite coin116(coin);
		coin116.setScale(0.05f, 0.04f);
		coin116.setPosition(210, 355);

		Sprite coin117(coin);
		coin117.setScale(0.05f, 0.04f);
		coin117.setPosition(230, 355);

		Sprite coin118(coin);
		coin118.setScale(0.05f, 0.04f);
		coin118.setPosition(250, 355);

		Sprite coin119(coin);
		coin119.setScale(0.05f, 0.04f);
		coin119.setPosition(270, 355);

		Sprite coin120(coin);
		coin120.setScale(0.05f, 0.04f);
		coin120.setPosition(290, 355);

		Sprite coin121(coin);
		coin121.setScale(0.05f, 0.04f);
		coin121.setPosition(310, 355);

		Sprite coin122(coin);
		coin122.setScale(0.05f, 0.04f);
		coin122.setPosition(330, 355);

		Sprite coin123(coin);
		coin123.setScale(0.05f, 0.04f);
		coin123.setPosition(350, 355);

		Sprite coin124(coin);
		coin124.setScale(0.05f, 0.04f);
		coin124.setPosition(367, 355);

		Sprite coin125(coin);
		coin125.setScale(0.05f, 0.04f);
		coin125.setPosition(410, 355);

		Sprite coin126(coin);
		coin126.setScale(0.05f, 0.04f);
		coin126.setPosition(430, 355);

		Sprite coin127(coin);
		coin127.setScale(0.05f, 0.04f);
		coin127.setPosition(450, 355);

		Sprite coin128(coin);
		coin128.setScale(0.05f, 0.04f);
		coin128.setPosition(470, 355);

		Sprite coin129(coin);
		coin129.setScale(0.05f, 0.04f);
		coin129.setPosition(490, 355);

		Sprite coin130(coin);
		coin130.setScale(0.05f, 0.04f);
		coin130.setPosition(510, 355);

		Sprite coin131(coin);
		coin131.setScale(0.05f, 0.04f);
		coin131.setPosition(530, 355);

		Sprite coin132(coin);
		coin132.setScale(0.05f, 0.04f);
		coin132.setPosition(550, 355);

		Sprite coin133(coin);
		coin133.setScale(0.05f, 0.04f);
		coin133.setPosition(570, 355);

		Sprite coin134(coin);
		coin134.setScale(0.05f, 0.04f);
		coin134.setPosition(590, 355);

		Sprite coin135(coin);
		coin135.setScale(0.05f, 0.04f);
		coin135.setPosition(610, 355);

		Sprite coin136(coin);
		coin136.setScale(0.05f, 0.04f);
		coin136.setPosition(630, 355);

		Sprite coin137(coin);
		coin137.setScale(0.05f, 0.04f);
		coin137.setPosition(650, 355);

		Sprite coin138(coin);
		coin138.setScale(0.05f, 0.04f);
		coin138.setPosition(665, 355);

		Sprite coin139(coin);
		coin139.setScale(0.05f, 0.04f);
		coin139.setPosition(215, 335);

		Sprite coin140(coin);
		coin140.setScale(0.05f, 0.04f);
		coin140.setPosition(235, 335);

		Sprite coin141(coin);
		coin141.setScale(0.05f, 0.04f);
		coin141.setPosition(280, 335);

		Sprite coin142(coin);
		coin142.setScale(0.05f, 0.04f);
		coin142.setPosition(300, 335);

		Sprite coin143(coin);
		coin143.setScale(0.05f, 0.04f);
		coin143.setPosition(470, 335);

		Sprite coin144(coin);
		coin144.setScale(0.05f, 0.04f);
		coin144.setPosition(490, 335);

		Sprite coin145(coin);
		coin145.setScale(0.05f, 0.04f);
		coin145.setPosition(535, 335);

		Sprite coin146(coin);
		coin146.setScale(0.05f, 0.04f);
		coin146.setPosition(555, 335);

		Sprite coin147(coin);
		coin147.setScale(0.05f, 0.04f);
		coin147.setPosition(215, 320);

		Sprite coin148(coin);
		coin148.setScale(0.05f, 0.04f);
		coin148.setPosition(235,320);

		Sprite coin149(coin);
		coin149.setScale(0.05f, 0.04f);
		coin149.setPosition(280, 320);

		Sprite coin150(coin);
		coin150.setScale(0.05f, 0.04f);
		coin150.setPosition(300, 320);

		Sprite coin151(coin);
		coin151.setScale(0.05f, 0.04f);
		coin151.setPosition(470, 320);

		Sprite coin152(coin);
		coin152.setScale(0.05f, 0.04f);
		coin152.setPosition(490, 320);

		Sprite coin153(coin);
		coin153.setScale(0.05f, 0.04f);
		coin153.setPosition(535, 320);

		Sprite coin154(coin);
		coin154.setScale(0.05f, 0.04f);
		coin154.setPosition(555, 320);

		Sprite coin155(coin);
		coin155.setScale(0.05f, 0.04f);
		coin155.setPosition(215, 305);

		Sprite coin156(coin);
		coin156.setScale(0.05f, 0.04f);
		coin156.setPosition(235, 305);

		Sprite coin157(coin);
		coin157.setScale(0.05f, 0.04f);
		coin157.setPosition(280, 305);

		Sprite coin158(coin);
		coin158.setScale(0.05f, 0.04f);
		coin158.setPosition(300, 305);

		Sprite coin159(coin);
		coin159.setScale(0.05f, 0.04f);
		coin159.setPosition(470, 305);

		Sprite coin160(coin);
		coin160.setScale(0.05f, 0.04f);
		coin160.setPosition(490, 305);

		Sprite coin161(coin);
		coin161.setScale(0.05f, 0.04f);
		coin161.setPosition(535, 305);

		Sprite coin162(coin);
		coin162.setScale(0.05f, 0.04f);
		coin162.setPosition(555, 305);


		Sprite coin163(coin);
		coin163.setScale(0.05f, 0.04f);
		coin163.setPosition(215, 290);

		Sprite coin164(coin);
		coin164.setScale(0.05f, 0.04f);
		coin164.setPosition(235, 290);

		Sprite coin165(coin);
		coin165.setScale(0.05f, 0.04f);
		coin165.setPosition(280, 290);

		Sprite coin166(coin);
		coin166.setScale(0.05f, 0.04f);
		coin166.setPosition(300, 290);

		Sprite coin167(coin);
		coin167.setScale(0.05f, 0.04f);
		coin167.setPosition(470, 290);

		Sprite coin168(coin);
		coin168.setScale(0.05f, 0.04f);
		coin168.setPosition(490, 290);

		Sprite coin169(coin);
		coin169.setScale(0.05f, 0.04f);
		coin169.setPosition(535,290);

		Sprite coin170(coin);
		coin170.setScale(0.05f, 0.04f);
		coin170.setPosition(555, 290);

		Sprite coin171(coin);
		coin171.setScale(0.05f, 0.04f);
		coin171.setPosition(215, 275);

		Sprite coin172(coin);
		coin172.setScale(0.05f, 0.04f);
		coin172.setPosition(235, 275);

		Sprite coin173(coin);
		coin173.setScale(0.05f, 0.04f);
		coin173.setPosition(280,275);

		Sprite coin174(coin);
		coin174.setScale(0.05f, 0.04f);
		coin174.setPosition(300, 275);

		Sprite coin175(coin);
		coin175.setScale(0.05f, 0.04f);
		coin175.setPosition(470, 275);

		Sprite coin176(coin);
		coin176.setScale(0.05f, 0.04f);
		coin176.setPosition(490, 275);

		Sprite coin177(coin);
		coin177.setScale(0.05f, 0.04f);
		coin177.setPosition(535, 275);

		Sprite coin178(coin);
		coin178.setScale(0.05f, 0.04f);
		coin178.setPosition(555, 275);

		Sprite coin179(coin);
		coin179.setScale(0.05f, 0.04f);
		coin179.setPosition(555, 260);

		Sprite coin200(coin);
		coin200.setScale(0.05f, 0.04f);
		coin200.setPosition(535, 260);

		Sprite coin201(coin);
		coin201.setScale(0.05f, 0.04f);
		coin201.setPosition(515, 260);

		Sprite coin202(coin);
		coin202.setScale(0.05f, 0.04f);
		coin202.setPosition(490, 260);

		Sprite coin203(coin);
		coin203.setScale(0.05f, 0.04f);
		coin203.setPosition(470, 260);

		Sprite coin205(coin);
		coin205.setScale(0.05f, 0.04f);
		coin205.setPosition(300, 260);

		Sprite coin206(coin);
		coin206.setScale(0.05f, 0.04f);
		coin206.setPosition(280, 260);

		Sprite coin207(coin);
		coin207.setScale(0.05f, 0.04f);
		coin207.setPosition(260, 260);

		Sprite coin_207(coin);
		coin_207.setScale(0.05f, 0.04f);
		coin_207.setPosition(516, 275);

		Sprite coin210(coin);
		coin210.setScale(0.05f, 0.04);
		coin210.setPosition(260, 275);

		Sprite coin208(coin);
		coin208.setScale(0.05f, 0.04f);
		coin208.setPosition(235, 260);

		Sprite coin209(coin);
		coin209.setScale(0.05f, 0.04f);
		coin209.setPosition(215, 260);

		Sprite coin211(coin);
		coin211.setScale(0.05f, 0.04f);
		coin211.setPosition(215, 245);

		Sprite coin212(coin);
		coin212.setScale(0.05f, 0.04f);
		coin212.setPosition(235, 245);

		Sprite coin213(coin);
		coin213.setScale(0.05f, 0.04f);
		coin213.setPosition(280, 245);

		Sprite coin214(coin);
		coin214.setScale(0.05f, 0.04f);
		coin214.setPosition(300, 245);

		Sprite coin215(coin);
		coin215.setScale(0.05f, 0.04f);
		coin215.setPosition(470, 245);

		Sprite coin216(coin);
		coin216.setScale(0.05f, 0.04f);
		coin216.setPosition(490, 245);

		Sprite coin217(coin);
		coin217.setScale(0.05f, 0.04f);
		coin217.setPosition(530, 245);

		Sprite coin218(coin);
		coin218.setScale(0.05f, 0.04f);
		coin218.setPosition(555, 245);

		Sprite coin219(coin);
		coin219.setScale(0.05f, 0.04f);
		coin219.setPosition(555, 230);

		Sprite coin220(coin);
		coin220.setScale(0.05f, 0.04f);
		coin220.setPosition(535, 230);

		Sprite coin221(coin);
		coin221.setScale(0.05f, 0.04f);
		coin221.setPosition(490, 230);

		Sprite coin222(coin);
		coin222.setScale(0.05f, 0.04f);
		coin222.setPosition(470, 230);

		Sprite coin223(coin);
		coin223.setScale(0.05f, 0.04f);
		coin223.setPosition(450, 230);

		Sprite coin224(coin);
		coin224.setScale(0.05f, 0.04f);
		coin224.setPosition(430, 230);

		Sprite coin225(coin);
		coin225.setScale(0.05f, 0.04f);
		coin225.setPosition(410, 230);

		Sprite coin226(coin);
		coin226.setScale(0.05f, 0.04f);
		coin226.setPosition(390, 230);

		Sprite coin227(coin);
		coin227.setScale(0.05f, 0.04f);
		coin227.setPosition(370, 230);

		Sprite coin228(coin);
		coin228.setScale(0.05f, 0.04f);
		coin228.setPosition(350, 230);

		Sprite coin229(coin);
		coin229.setScale(0.05f, 0.04f);
		coin229.setPosition(325, 230);

		Sprite coin230(coin);
		coin230.setScale(0.05f, 0.04f);
		coin230.setPosition(300, 230);

		Sprite coin231(coin);
		coin231.setScale(0.05f, 0.04f);
		coin231.setPosition(280, 230);

		Sprite coin232(coin);
		coin232.setScale(0.05f, 0.04f);
		coin232.setPosition(235, 230);

		Sprite coin233(coin);
		coin233.setScale(0.05f, 0.04f);
		coin233.setPosition(215, 230);

		Sprite coin234(coin);
		coin234.setScale(0.05f, 0.04f);
		coin234.setPosition(215, 215);

		Sprite coin235(coin);
		coin235.setScale(0.05f, 0.04f);
		coin235.setPosition(235, 215);

		Sprite coin236(coin);
		coin236.setScale(0.05f, 0.04f);
		coin236.setPosition(215, 200);

		Sprite coin237(coin);
		coin237.setScale(0.05f, 0.04f);
		coin237.setPosition(235, 200);

		Sprite coin238(coin);
		coin238.setScale(0.05f, 0.04f);
		coin238.setPosition(215, 185);

		Sprite coin239(coin);
		coin239.setScale(0.05f, 0.04f);
		coin239.setPosition(235, 185);

		Sprite coin240(coin);
		coin240.setScale(0.05f, 0.04f);
		coin240.setPosition(280, 185);

		Sprite coin241(coin);
		coin241.setScale(0.05f, 0.04f);
		coin241.setPosition(300, 185);

		Sprite coin242(coin);
		coin242.setScale(0.05f, 0.04f);
		coin242.setPosition(320, 185);

		Sprite coin243(coin);
		coin243.setScale(0.05f, 0.04f);
		coin243.setPosition(340, 185);

		Sprite coin244(coin);
		coin244.setScale(0.05f, 0.04f);
		coin244.setPosition(360, 185);

		Sprite coin245(coin);
		coin245.setScale(0.05f, 0.04f);
		coin245.setPosition(340, 205);

		Sprite coin246(coin);
		coin246.setScale(0.05f, 0.04f);
		coin246.setPosition(360, 205);

		Sprite coin247(coin);
		coin247.setScale(0.05f, 0.04f);
		coin247.setPosition(410, 185);

		Sprite coin248(coin);
		coin248.setScale(0.05f, 0.04f);
		coin248.setPosition(430, 185);

		Sprite coin249(coin);
		coin249.setScale(0.05f, 0.04f);
		coin249.setPosition(450, 185);

		Sprite coin250(coin);
		coin250.setScale(0.05f, 0.04f);
		coin250.setPosition(470, 185);

		Sprite coin251(coin);
		coin251.setScale(0.05f, 0.04f);
		coin251.setPosition(490, 185);

		Sprite coin252(coin);
		coin252.setScale(0.05f, 0.04f);
		coin252.setPosition(405, 205);

		Sprite coin253(coin);
		coin253.setScale(0.05f, 0.04f);
		coin253.setPosition(425, 205);

		Sprite coin254(coin);
		coin254.setScale(0.05f, 0.04f);
		coin254.setPosition(535, 185);

		Sprite coin255(coin);
		coin255.setScale(0.05f, 0.04f);
		coin255.setPosition(550, 185);

		Sprite coin256(coin);
		coin256.setScale(0.05f, 0.04f);
		coin256.setPosition(570, 185);

		Sprite coin257(coin);
		coin257.setScale(0.05f, 0.04f);
		coin257.setPosition(590, 185);

		Sprite coin258(coin);
		coin258.setScale(0.05f, 0.04f);
		coin258.setPosition(610, 185);

		Sprite coin259(coin);
		coin259.setScale(0.05f, 0.04f);
		coin259.setPosition(625, 185);

		Sprite coin260(coin);
		coin260.setScale(0.05f, 0.04f);
		coin260.setPosition(637, 185);

		Sprite coin261(coin);
		coin261.setScale(0.05f, 0.04f);
		coin261.setPosition(655, 185);

		Sprite coin262(coin);
		coin262.setScale(0.05f, 0.04f);
		coin262.setPosition(535, 205);

		Sprite coin263(coin);
		coin263.setScale(0.05f, 0.04f);
		coin263.setPosition(555, 205);

		Sprite coin264(coin);
		coin264.setScale(0.05f, 0.04f);
		coin264.setPosition(195, 185);

		Sprite coin265(coin);
		coin265.setScale(0.05f, 0.04f);
		coin265.setPosition(175, 185);

		Sprite coin266(coin);
		coin266.setScale(0.05f, 0.04f);
		coin266.setPosition(155, 185);

		Sprite coin267(coin);
		coin267.setScale(0.05f, 0.04f);
		coin267.setPosition(135, 185);

		Sprite coin268(coin);
		coin268.setScale(0.05f, 0.04f);
		coin268.setPosition(110, 185);
    //image
    Texture texture;
    if(texture.loadFromFile("Data/All Direction.png") == 0){
        return 1;
    }
    Texture ghosto;
    if(ghosto.loadFromFile("Data/Ghosto.png") == 0){
        return 1;
    }
     Texture ghosto2;
    if(ghosto2.loadFromFile("Data/Ghosto2.png") == 0){
        return 1;
    }
     Texture ghosto3;
    if(ghosto3.loadFromFile("Data/Ghosto3.png") == 0){
        return 1;
    }
    Texture ghosto4;
    if(ghosto4.loadFromFile("Data/Ghosto4.png") == 0){
        return 1;
    }

    Texture image3;
    if(image3.loadFromFile("Data/Cursor.png") == 0){
        return 1;
    }
    Sprite cursor(image3);
    cursor.setScale(0.1f,0.1f);
    cursor.setPosition(300,300);
    RectangleShape pacman(Vector2f(25.0f,25.0f));
    pacman.setPosition(400,450);
    pacman.setTexture(&texture);
    Vector2u texturesize=texture.getSize();
    texturesize.x/=2;
    texturesize.y/=4;
    pacman.setTextureRect(sf::IntRect(texturesize.x*1,texturesize.y*0,texturesize.x,texturesize.y));
   // Sprite ghost1(ghosto);
    //ghost1.setScale(0.046f,0.046f);
    //ghost1.setPosition(120,450);
RectangleShape ghost1(Vector2f(25.0f,25.0f));
ghost1.setPosition(120,450);
ghost1.setTexture(&ghosto);

    Sprite ghost_2(ghosto2);
    ghost_2.setScale(0.046f,0.046f);
    ghost_2.setPosition(120,220);

    Sprite ghost_3(ghosto3);
    ghost_3.setScale(0.046f,0.046f);
    ghost_3.setPosition(150,180);

    Sprite ghost_4(ghosto4);
    ghost_4.setScale(0.08f,0.08f);
    ghost_4.setPosition(400,200);
    //font
    Font font;
    if(font.loadFromFile("Data/ALBA.ttf") == 0){
        return 1;
    }
    Font font1;
    if(font1.loadFromFile("Data/ARIALNB.ttf") == 0){
        return 1;
    }
    //text
    Text text;
    text.setFont(font);
    text.setCharacterSize(120);
    text.setString("PACMAN");
    text.setColor(Color::Blue);
    text.setPosition(200,0);
    text.setStyle(Text::Italic);
    Text text2;
    text2.setFont(font);
    text2.setCharacterSize(80);
    text2.setString("GAME OVER");
    text2.setColor(Color::Red);
    text2.setPosition(200,200);
    text2.setStyle(Text::Bold);
    Text text3;
    text3.setFont(font);
    text3.setCharacterSize(80);
    text3.setString("YOU WIN");
    text3.setColor(Color::Magenta);
    text3.setPosition(200,200);
    text3.setStyle(Text::Bold);
    Text text4;
    text4.setFont(font1);
    text4.setCharacterSize(20);
    text4.setString("Score :") ;
    text4.setColor(Color::Yellow);
    text4.setPosition(250,520);
    text4.setStyle(Text::Bold);
    Text start;
    start.setFont(font);
    start.setCharacterSize(80);
    start.setString("START GAME");
    start.setColor(Color::Yellow);
    start.setPosition(0,250);
    Text exit;
    exit.setFont(font);
    exit.setCharacterSize(80);
    exit.setString("EXIT");
    exit.setColor(Color::Yellow);
    exit.setPosition(0,400);


    //sound
    SoundBuffer begin;
    if(begin.loadFromFile("Data/Powerup.wav") == 0){
        return 1;
    }
    Sound sound1;
    sound1.setBuffer(begin);

    SoundBuffer move;
    if(move.loadFromFile("Data/Pickup_Coin.wav") == 0){
        return 1;
    }
    Sound sound2;
    sound2.setBuffer(move);
    SoundBuffer mousesound;
    if(mousesound.loadFromFile("Data/Mouse Sound.wav") == 0){
        return 1;
    }
    Sound sound3;
    sound3.setBuffer(mousesound);
    SoundBuffer mouseclick;
    if(mouseclick.loadFromFile("Data/Click Sound.wav") == 0){
        return 1;
    }
    Sound sound4;
    sound4.setBuffer(mouseclick);
    SoundBuffer gameover;
    if(gameover.loadFromFile("Data/Gameover Sound.wav") == 0){
        return 1;
    }
    SoundBuffer lifelose;
    if(lifelose.loadFromFile("Data/Pacman_Death.wav") == 0){
        return 1;
    }
    Sound sound6;
    sound6.setBuffer(lifelose);
    Sound sound5;
    sound5.setBuffer(gameover);
    //music
    Music music;
    if(music.openFromFile("Data/Pacman-Beginning.ogg") == 0){
        return 1;
    }
    music.play();
    music.setLoop(true);
    //event
    Event event;
    //variables
    int x , y ;
    int a = 400, b = 450;
    int lifes = 3;
    int counter = 0 ;
    bool Play = true , Menu = true , End = true ;
    bool rightarrow = false;
    bool leftarrow = false;
    bool uparrow = false;
    bool downarrow = false;
    //game loop
    pacman.setPosition(a,b);
    while(Menu == true){
        while(window.pollEvent(event)){
            window.clear();
            window.draw(start);
            window.draw(text);
            window.draw(exit);
            window.draw(cursor);
            window.display();
            window.setMouseCursorVisible(false);
            Vector2i Mouseposition = Mouse::getPosition(window);
            cursor.setPosition(Mouseposition.x,Mouseposition.y);
            if(cursor.getGlobalBounds().intersects(exit.getGlobalBounds()) == true){
                    sound3.play();
                if(event.type == Event::MouseButtonPressed && Mouse::Right){
                        sound4.play();
                        window.close();
                }
            }
            if(cursor.getGlobalBounds().intersects(start.getGlobalBounds()) == true){
                sound3.play();
                if(event.type == Event::MouseButtonPressed && Mouse::Right){
                        sound3.pause();
                        sound4.play();
                        window.clear();
                        Menu = false;
                        Play = true;
                        End = false;
                }
            }
             if(event.type == Event::Closed){
                    window.close();
                }
                }
    }
    while(Play == true){
        music.pause();
            //process events
        while(window.pollEvent(event)){

                sound1.play();
                sound3.pause();
                sound4.pause();

			//All events for key pressed
			if (event.type == sf::Event::KeyPressed)
			{

			    sound1.pause();
				if (event.key.code == sf::Keyboard::Left) leftarrow = true;
				if (event.key.code == sf::Keyboard::Right) rightarrow = true;
				if (event.key.code == sf::Keyboard::Up) uparrow = true;
				if (event.key.code == sf::Keyboard::Down) downarrow = true;
			}

			//All events for key released
			if (event.type == sf::Event::KeyReleased)
			{
			    sound1.pause();
				if (event.key.code == sf::Keyboard::Left) leftarrow = false;
				if (event.key.code == sf::Keyboard::Right) rightarrow = false;
				if (event.key.code == sf::Keyboard::Up) uparrow = false;
				if (event.key.code == sf::Keyboard::Down) downarrow = false;
			}
            if(event.type == Event::Closed){
                    window.close();
                }
        }
    //logic

  //MOVEMENT
		//Movement on X axis
		if (rightarrow == true)
		{
			x = 1;
			a += 1;
            pacman.setTextureRect(sf::IntRect(texturesize.x*1,texturesize.y*0,texturesize.x,texturesize.y));

		}

		if (leftarrow == true)
		{
			x  = -1;
			a -= 1;
            pacman.setTextureRect(sf::IntRect(texturesize.x*1,texturesize.y*1,texturesize.x,texturesize.y));

		}

		//Stopping horizontal movement if both buttons are pressed or released
		if (leftarrow == true && rightarrow == true)
		{
			x = 0;
		}

		if (leftarrow == false && rightarrow == false)
		{
			x = 0;
		}

		//Movement on y axis
		if (downarrow == true)
		{
			y = 1;
			b += 1;
            pacman.setTextureRect(sf::IntRect(texturesize.x*1,texturesize.y*3,texturesize.x,texturesize.y));

		}

		if (uparrow == true)
		{
			y = -1;
			b -= 1;
            pacman.setTextureRect(sf::IntRect(texturesize.x*1,texturesize.y*2,texturesize.x,texturesize.y));

		}

		//Stopping vertical movement if both buttons are pressed or released
		if (uparrow == true && downarrow == true)
		{
			y = 0;
		}

		if (uparrow == false && downarrow == false)
		{
			y = 0;
		}
		if(uparrow == true && rightarrow == true){
            uparrow = false;
            rightarrow = false;
		}
		if(downarrow == true && rightarrow == true){
            downarrow = false;
            rightarrow = false;
		}
		if(uparrow == true && leftarrow == true){
            uparrow = false;
            leftarrow = false;
		}
		if(downarrow == true && leftarrow == true){
            downarrow = false;
            leftarrow = false;
		}

		if(a > 800){
            a = 0;
            pacman.setPosition(a,b);
		}
		if(a < 0){
            a = 800;
            pacman.setPosition(a,b);
		}
		if(b > 600){
            b = 0;
            pacman.setPosition(a,b);
		}
		if(b < 0){
            b = 600;
            pacman.setPosition(a,b);
		}
		pacman.move(x , y);



        if(pacman.getGlobalBounds().intersects(shape2.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape3.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape4.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape5.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape6.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape7.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape8.getGlobalBounds())==true||
     pacman.getGlobalBounds().intersects(shape9.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape10.getGlobalBounds())==true||
    pacman.getGlobalBounds().intersects(shape11.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape12.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape13.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape14.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape15.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape16.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape17.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape18.getGlobalBounds())==true||
     pacman.getGlobalBounds().intersects(shape19.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape20.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape21.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape22.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape23.getGlobalBounds())==true||
    pacman.getGlobalBounds().intersects(shape24.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape25.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape26.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape27.getGlobalBounds())==true ||
   pacman.getGlobalBounds().intersects(shape28.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape29.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape30.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape31.getGlobalBounds())==true||
    pacman.getGlobalBounds().intersects(shape32.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape33.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape34.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape35.getGlobalBounds())==true||
    pacman.getGlobalBounds().intersects(shape36.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape37.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape38.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape39.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape40.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape41.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape42.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape43.getGlobalBounds())==true||
    pacman.getGlobalBounds().intersects(shape44.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape45.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape46.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape47.getGlobalBounds())==true||
    pacman.getGlobalBounds().intersects(shape48.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape49.getGlobalBounds())==true||
    pacman.getGlobalBounds().intersects(shape50.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape51.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape52.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape53.getGlobalBounds())==true)
{
    pacman.move(-x,0);
}
//pacman.move(0,y);
if(pacman.getGlobalBounds().intersects(shape2.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape3.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape4.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape5.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape6.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape7.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape8.getGlobalBounds())==true||
     pacman.getGlobalBounds().intersects(shape9.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape10.getGlobalBounds())==true||
    pacman.getGlobalBounds().intersects(shape11.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape12.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape13.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape14.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape15.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape16.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape17.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape18.getGlobalBounds())==true||
     pacman.getGlobalBounds().intersects(shape19.getGlobalBounds())==true||
    pacman.getGlobalBounds().intersects(shape20.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape21.getGlobalBounds())==true||
    pacman.getGlobalBounds().intersects(shape22.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape23.getGlobalBounds())==true||
    pacman.getGlobalBounds().intersects(shape24.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape25.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape26.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape27.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape28.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape29.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape30.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape31.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape32.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape33.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape34.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape35.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape36.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape37.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape38.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape39.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape40.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape41.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape42.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape43.getGlobalBounds())==true||
    pacman.getGlobalBounds().intersects(shape44.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape45.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape46.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape47.getGlobalBounds())==true||
    pacman.getGlobalBounds().intersects(shape48.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape49.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape50.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape51.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape52.getGlobalBounds())==true||
   pacman.getGlobalBounds().intersects(shape53.getGlobalBounds())==true )
{
    pacman.move(0,-y);
}
//movement of ghosts
        if(pacman.getPosition().x > ghost1.getPosition().x){
            ghost1.move(1,0);

        }
        if(pacman.getPosition().x < ghost1.getPosition().x){
            ghost1.move(-1,0);

        }
        if(pacman.getPosition().y > ghost1.getPosition().y){
            ghost1.move(0,1);

        }
        if(pacman.getPosition().y < ghost1.getPosition().y){
            ghost1.move(0,-1);

        }
        if (pacman.getPosition().x > ghost_2.getPosition().x) {
			ghost_2.move(1, 0);

		}
		if (pacman.getPosition().x < ghost_2.getPosition().x) {
			ghost_2.move(-1, 0);

		}
		if (pacman.getPosition().y > ghost_2.getPosition().y) {
			ghost_2.move(0, 1);

		}
		if (pacman.getPosition().y < ghost_2.getPosition().y) {
			ghost_2.move(0, -1);

		}

		if (pacman.getPosition().x > ghost_3.getPosition().x) {
			ghost_3.move(1, 0);

		}
		if (pacman.getPosition().x < ghost_3.getPosition().x) {
			ghost_3.move(-1, 0);

		}
		if (pacman.getPosition().y > ghost_3.getPosition().y) {
			ghost_3.move(0, 1);

		}
		if (pacman.getPosition().y < ghost_3.getPosition().y) {
			ghost_3.move(0, -1);

		}

		if (pacman.getPosition().x > ghost_4.getPosition().x) {
			ghost_2.move(1, 0);

		}
		if (pacman.getPosition().x < ghost_4.getPosition().x) {
			ghost_4.move(-1, 0);

		}
		if (pacman.getPosition().y > ghost_4.getPosition().y) {
			ghost_4.move(0, 1);

		}
		if (pacman.getPosition().y < ghost_4.getPosition().y) {
			ghost_4.move(0, -1);

		}




          if(ghost1.getGlobalBounds().intersects(shape2.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape3.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape4.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape5.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape6.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape7.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape8.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape9.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape10.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape11.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape12.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape13.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape14.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape15.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape16.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape17.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape18.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape19.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape20.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape21.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape22.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape23.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape24.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape25.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape26.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape27.getGlobalBounds())==true ||
   ghost1.getGlobalBounds().intersects(shape28.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape29.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape30.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape31.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape32.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape33.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape34.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape35.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape36.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape37.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape38.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape39.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape40.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape41.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape42.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape43.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape44.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape45.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape46.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape47.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape48.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape49.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape50.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape51.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape52.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape53.getGlobalBounds())==true)
{
    ghost1.move(-1,0);
    ghost1.move(0,1);
    ghost1.move(0,-1);
}
//pacman.move(0,y);
if(ghost1.getGlobalBounds().intersects(shape2.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape3.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape4.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape5.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape6.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape7.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape8.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape9.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape10.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape11.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape12.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape13.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape14.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape15.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape16.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape17.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape18.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape19.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape20.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape21.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape22.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape23.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape24.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape25.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape26.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape27.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape28.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape29.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape30.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape31.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape32.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape33.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape34.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape35.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape36.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape37.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape38.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape39.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape40.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape41.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape42.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape43.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape44.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape45.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape46.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape47.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape48.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape49.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape50.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape51.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape52.getGlobalBounds())==true||
   ghost1.getGlobalBounds().intersects(shape53.getGlobalBounds())==true )
{
    ghost1.move(0,-1);
    ghost1.move(1,0);
    ghost1.move(-1,0);
}
if (ghost_2.getGlobalBounds().intersects(shape2.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape3.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape4.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape5.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape6.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape7.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape8.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape9.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape10.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape11.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape12.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape13.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape14.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape15.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape16.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape17.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape18.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape19.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape20.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape21.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape22.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape23.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape24.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape25.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape26.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape27.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape28.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape29.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape30.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape31.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape32.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape33.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape34.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape35.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape36.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape37.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape38.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape39.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape40.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape41.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape42.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape43.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape44.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape45.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape46.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape47.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape48.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape49.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape50.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape51.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape52.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape53.getGlobalBounds()) == true)
		{
			ghost_2.move(-1, 0);
		}

		if (ghost_3.getGlobalBounds().intersects(shape2.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape3.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape4.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape5.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape6.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape7.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape8.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape9.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape10.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape11.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape12.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape13.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape14.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape15.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape16.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape17.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape18.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape19.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape20.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape21.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape22.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape23.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape24.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape25.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape26.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape27.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape28.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape29.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape30.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape31.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape32.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape33.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape34.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape35.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape36.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape37.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape38.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape39.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape40.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape41.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape42.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape43.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape44.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape45.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape46.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape47.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape48.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape49.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape50.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape51.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape52.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape53.getGlobalBounds()) == true)
		{
			ghost_3.move(-1, 0);
		}
 if (ghost_2.getGlobalBounds().intersects(shape2.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape3.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape4.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape5.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape6.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape7.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape8.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape9.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape10.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape11.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape12.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape13.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape14.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape15.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape16.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape17.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape18.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape19.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape20.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape21.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape22.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape23.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape24.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape25.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape26.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape27.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape28.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape29.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape30.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape31.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape32.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape33.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape34.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape35.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape36.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape37.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape38.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape39.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape40.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape41.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape42.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape43.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape44.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape45.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape46.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape47.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape48.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape49.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape50.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape51.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape52.getGlobalBounds()) == true ||
			ghost_2.getGlobalBounds().intersects(shape53.getGlobalBounds()) == true)
		{
			ghost_2.move(0, -1);
		}
		if (ghost_3.getGlobalBounds().intersects(shape2. getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape3.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape4.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape5.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape6.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape7.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape8.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape9.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape10.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape11.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape12.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape13.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape14.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape15.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape16.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape17.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape18.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape19.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape20.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape21.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape22.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape23.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape24.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape25.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape26.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape27.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape28.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape29.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape30.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape31.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape32.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape33.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape34.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape35.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape36.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape37.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape38.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape39.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape40.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape41.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape42.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape43.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape44.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape45.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape46.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape47.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape48.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape49.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape50.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape51.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape52.getGlobalBounds()) == true ||
			ghost_3.getGlobalBounds().intersects(shape53.getGlobalBounds()) == true)
		{
			ghost_3.move(0,-1);
		}
		if (ghost_4.getGlobalBounds().intersects(shape2.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape3.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape4.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape5.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape6.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape7.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape8.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape9.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape10.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape11.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape12.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape13.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape14.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape15.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape16.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape17.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape18.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape19.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape20.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape21.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape22.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape23.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape24.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape25.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape26.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape27.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape28.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape29.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape30.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape31.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape32.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape33.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape34.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape35.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape36.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape37.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape38.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape39.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape40.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape41.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape42.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape43.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape44.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape45.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape46.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape47.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape48.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape49.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape50.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape51.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape52.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape53.getGlobalBounds()) == true)
		{
			ghost_4.move(-1, 0);
		}
		if (ghost_4.getGlobalBounds().intersects(shape2.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape3.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape4.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape5.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape6.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape7.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape8.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape9.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape10.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape11.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape12.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape13.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape14.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape15.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape16.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape17.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape18.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape19.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape20.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape21.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape22.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape23.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape24.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape25.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape26.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape27.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape28.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape29.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape30.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape31.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape32.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape33.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape34.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape35.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape36.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape37.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape38.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape39.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape40.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape41.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape42.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape43.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape44.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape45.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape46.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape47.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape48.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape49.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape50.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape51.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape52.getGlobalBounds()) == true ||
			ghost_4.getGlobalBounds().intersects(shape53.getGlobalBounds()) == true)
		{
			ghost_4.move(0, -1);
		}

            //Eating coins
			if (pacman.getGlobalBounds().intersects(coin01.getGlobalBounds()) == true)
			{
				coin01.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin02.getGlobalBounds()) == true)
			{
				coin02.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin03.getGlobalBounds()) == true)
			{

				coin03.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin04.getGlobalBounds()) == true)
			{
				coin04.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin05.getGlobalBounds()) == true)
			{
				coin05.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin06.getGlobalBounds()) == true)
			{
				coin06.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin07.getGlobalBounds()) == true)
			{
				coin07.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin08.getGlobalBounds()) == true)
			{
				coin08.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin09.getGlobalBounds()) == true)
			{
				coin09.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin010.getGlobalBounds()) == true)
			{
				coin010.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin011.getGlobalBounds()) == true)
			{
				coin011.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin012.getGlobalBounds()) == true)
			{
				coin012.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin013.getGlobalBounds()) == true)
			{
				coin013.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin014.getGlobalBounds()) == true)
			{
				coin014.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin015.getGlobalBounds()) == true)
			{
				coin015.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin016.getGlobalBounds()) == true)
			{
				coin016.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin017.getGlobalBounds()) == true)
			{
				coin017.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin018.getGlobalBounds()) == true)
			{
				coin018.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin019.getGlobalBounds()) == true)
			{
				coin019.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin020.getGlobalBounds()) == true)
			{
				coin020.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin021.getGlobalBounds()) == true)
			{
				coin021.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin022.getGlobalBounds()) == true)
			{
				coin022.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin023.getGlobalBounds()) == true)
			{
				coin023.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin024.getGlobalBounds()) == true)
			{
				coin024.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin025.getGlobalBounds()) == true)
			{
				coin025.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin026.getGlobalBounds()) == true)
			{
				coin026.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin027.getGlobalBounds()) == true)
			{
				coin027.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin028.getGlobalBounds()) == true)
			{
				coin028.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin029.getGlobalBounds()) == true)
			{
				coin029.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin030.getGlobalBounds()) == true)
			{
				coin030.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin031.getGlobalBounds()) == true)
			{
				coin031.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin032.getGlobalBounds()) == true)
			{
				coin032.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin033.getGlobalBounds()) == true)
			{
				coin033.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin034.getGlobalBounds()) == true)
			{
				coin034.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin035.getGlobalBounds()) == true)
			{
				coin035.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin036.getGlobalBounds()) == true)
			{
				coin036.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin037.getGlobalBounds()) == true)
			{
				coin037.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin038.getGlobalBounds()) == true)
			{
				coin038.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin039.getGlobalBounds()) == true)
			{
				coin039.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin040.getGlobalBounds()) == true)
			{
				coin040.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin041.getGlobalBounds()) == true)
			{
				coin041.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin042.getGlobalBounds()) == true)
			{
				coin042.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin043.getGlobalBounds()) == true)
			{
				coin043.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin044.getGlobalBounds()) == true)
			{
				coin044.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin045.getGlobalBounds()) == true)
			{
				coin045.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin046.getGlobalBounds()) == true)
			{
				coin046.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin047.getGlobalBounds()) == true)
			{
				coin047.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin048.getGlobalBounds()) == true)
			{
				coin048.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin049.getGlobalBounds()) == true)
			{
				coin049.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin050.getGlobalBounds()) == true)
			{
				coin050.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin051.getGlobalBounds()) == true)
			{
				coin051.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin052.getGlobalBounds()) == true)
			{
				coin052.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin053.getGlobalBounds()) == true)
			{
				coin053.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin054.getGlobalBounds()) == true)
			{
				coin054.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin055.getGlobalBounds()) == true)
			{
				coin055.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin056.getGlobalBounds()) == true)
			{
				coin056.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin057.getGlobalBounds()) == true)
			{
				coin057.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin058.getGlobalBounds()) == true)
			{
				coin058.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin059.getGlobalBounds()) == true)
			{
				coin059.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin060.getGlobalBounds()) == true)
			{
				coin060.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin061.getGlobalBounds()) == true)
			{
				coin061.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin062.getGlobalBounds()) == true)
			{
				coin062.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin063.getGlobalBounds()) == true)
			{
				coin063.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin064.getGlobalBounds()) == true)
			{
				coin064.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin065.getGlobalBounds()) == true)
			{
				coin065.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin066.getGlobalBounds()) == true)
			{
				coin066.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin067.getGlobalBounds()) == true)
			{
				coin067.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin068.getGlobalBounds()) == true)
			{
				coin068.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin069.getGlobalBounds()) == true)
			{
				coin069.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin070.getGlobalBounds()) == true)
			{
				coin070.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin071.getGlobalBounds()) == true)
			{
				coin071.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin072.getGlobalBounds()) == true)
			{
				coin072.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin073.getGlobalBounds()) == true)
			{
				coin073.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin074.getGlobalBounds()) == true)
			{
				coin074.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin075.getGlobalBounds()) == true)
			{
				coin075.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin076.getGlobalBounds()) == true)
			{
				coin076.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin077.getGlobalBounds()) == true)
			{
				coin077.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin078.getGlobalBounds()) == true)
			{
				coin078.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin079.getGlobalBounds()) == true)
			{
				coin079.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin080.getGlobalBounds()) == true)
			{
				coin080.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin081.getGlobalBounds()) == true)
			{
				coin081.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin082.getGlobalBounds()) == true)
			{
				coin082.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin083.getGlobalBounds()) == true)
			{
				coin083.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin084.getGlobalBounds()) == true)
			{
				coin084.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin085.getGlobalBounds()) == true)
			{
				coin085.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin086.getGlobalBounds()) == true)
			{
				coin086.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin087.getGlobalBounds()) == true)
			{
				coin087.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin088.getGlobalBounds()) == true)
			{
				coin088.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin089.getGlobalBounds()) == true)
			{
				coin089.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin090.getGlobalBounds()) == true)
			{
				coin090.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin091.getGlobalBounds()) == true)
			{
				coin091.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin092.getGlobalBounds()) == true)
			{
				coin092.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin1.getGlobalBounds()) == true)
			{
				coin1.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin2.getGlobalBounds()) == true)
			{
				coin2.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin3.getGlobalBounds()) == true)
			{
				coin3.setColor(Color::Transparent);

				counter++;
			}

			if (pacman.getGlobalBounds().intersects(coin4.getGlobalBounds()) == true)
			{
				coin4.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin5.getGlobalBounds()) == true)
			{
				coin5.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin6.getGlobalBounds()) == true)
			{
				coin6.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin7.getGlobalBounds()) == true)
			{
				coin7.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin8.getGlobalBounds()) == true)
			{
				coin8.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin9.getGlobalBounds()) == true)
			{
				coin9.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin10.getGlobalBounds()) == true)
			{
				coin10.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin11.getGlobalBounds()) == true)
			{
				coin11.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin12.getGlobalBounds()) == true)
			{
				coin12.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin13.getGlobalBounds()) == true)
			{
				coin13.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin14.getGlobalBounds()) == true)
			{
				coin14.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin15.getGlobalBounds()) == true)
			{
				coin15.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin16.getGlobalBounds()) == true)
			{
				coin16.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin17.getGlobalBounds()) == true)
			{
				coin17.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin18.getGlobalBounds()) == true)
			{
				coin18.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin19.getGlobalBounds()) == true)
			{
				coin19.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin20.getGlobalBounds()) == true)
			{
				coin20.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin21.getGlobalBounds()) == true)
			{
				coin21.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin22.getGlobalBounds()) == true)
			{
				coin22.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin23.getGlobalBounds()) == true)
			{
				coin23.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin24.getGlobalBounds()) == true)
			{
				coin24.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin25.getGlobalBounds()) == true)
			{
				coin25.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin26.getGlobalBounds()) == true)
			{
				coin26.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin27.getGlobalBounds()) == true)
			{
				coin27.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin28.getGlobalBounds()) == true)
			{
				coin28.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin29.getGlobalBounds()) == true)
			{
				coin29.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin30.getGlobalBounds()) == true)
			{
				coin30.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin31.getGlobalBounds()) == true)
			{
				coin31.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin32.getGlobalBounds()) == true)
			{
				coin32.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin33.getGlobalBounds()) == true)
			{
				coin33.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin34.getGlobalBounds()) == true)
			{
				coin34.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin35.getGlobalBounds()) == true)
			{
				coin35.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin36.getGlobalBounds()) == true)
			{
				coin36.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin37.getGlobalBounds()) == true)
			{
				coin37.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin38.getGlobalBounds()) == true)
			{
				coin38.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin39.getGlobalBounds()) == true)
			{
				coin39.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin40.getGlobalBounds()) == true)
			{
				coin40.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin41.getGlobalBounds()) == true)
			{
				coin41.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin42.getGlobalBounds()) == true)
			{
				coin42.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin43.getGlobalBounds()) == true)
			{
				coin43.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin44.getGlobalBounds()) == true)
			{
				coin44.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin45.getGlobalBounds()) == true)
			{
				coin45.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin46.getGlobalBounds()) == true)
			{
				coin46.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin47.getGlobalBounds()) == true)
			{
				coin47.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin48.getGlobalBounds()) == true)
			{
				coin48.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin49.getGlobalBounds()) == true)
			{
				coin49.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin50.getGlobalBounds()) == true)
			{
				coin50.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin51.getGlobalBounds()) == true)
			{
				coin51.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin52.getGlobalBounds()) == true)
			{
				coin52.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin53.getGlobalBounds()) == true)
			{
				coin53.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin54.getGlobalBounds()) == true)
			{
				coin54.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin55.getGlobalBounds()) == true)
			{
				coin55.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin56.getGlobalBounds()) == true)
			{
				coin56.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin57.getGlobalBounds()) == true)
			{
				coin57.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin58.getGlobalBounds()) == true)
			{
				coin58.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin59.getGlobalBounds()) == true)
			{
				coin59.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin60.getGlobalBounds()) == true)
			{
				coin60.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin61.getGlobalBounds()) == true)
			{
				coin61.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin62.getGlobalBounds()) == true)
			{
				coin62.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin63.getGlobalBounds()) == true)
			{
				coin63.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin64.getGlobalBounds()) == true)
			{
				coin64.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin65.getGlobalBounds()) == true)
			{
				coin65.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin66.getGlobalBounds()) == true)
			{
				coin66.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin67.getGlobalBounds()) == true)
			{
				coin67.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin68.getGlobalBounds()) == true)
			{
				coin68.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin69.getGlobalBounds()) == true)
			{
				coin69.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin70.getGlobalBounds()) == true)
			{
				coin70.setColor(Color::Transparent);

				counter++;
			}

			if (pacman.getGlobalBounds().intersects(coin71.getGlobalBounds()) == true)
			{
				coin71.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin72.getGlobalBounds()) == true)
			{
				coin72.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin73.getGlobalBounds()) == true)
			{
				coin73.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin74.getGlobalBounds()) == true)
			{
				coin74.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin75.getGlobalBounds()) == true)
			{
				coin75.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin76.getGlobalBounds()) == true)
			{
				coin76.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin77.getGlobalBounds()) == true)
			{
				coin77.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin78.getGlobalBounds()) == true)
			{
				coin78.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin79.getGlobalBounds()) == true)
			{
				coin79.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin80.getGlobalBounds()) == true)
			{
				coin80.setColor(Color::Transparent);

				counter++;
			}

			if (pacman.getGlobalBounds().intersects(coin81.getGlobalBounds()) == true)
			{
				coin81.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin82.getGlobalBounds()) == true)
			{
				coin82.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin83.getGlobalBounds()) == true)
			{
				coin83.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin84.getGlobalBounds()) == true)
			{
				coin84.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin85.getGlobalBounds()) == true)
			{
				coin85.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin86.getGlobalBounds()) == true)
			{
				coin86.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin87.getGlobalBounds()) == true)
			{
				coin87.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin88.getGlobalBounds()) == true)
			{
				coin88.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin89.getGlobalBounds()) == true)
			{
				coin89.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin90.getGlobalBounds()) == true)
			{
				coin90.setColor(Color::Transparent);

				counter++;
			}

			if (pacman.getGlobalBounds().intersects(coin91.getGlobalBounds()) == true)
			{
				coin91.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin92.getGlobalBounds()) == true)
			{
				coin92.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin93.getGlobalBounds()) == true)
			{
				coin93.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin94.getGlobalBounds()) == true)
			{
				coin94.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin95.getGlobalBounds()) == true)
			{
				coin95.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin96.getGlobalBounds()) == true)
			{
				coin96.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin97.getGlobalBounds()) == true)
			{
				coin97.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin98.getGlobalBounds()) == true)
			{
				coin98.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin99.getGlobalBounds()) == true)
			{
				coin99.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin100.getGlobalBounds()) == true)
			{
				coin100.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin101.getGlobalBounds()) == true)
			{
				coin101.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin102.getGlobalBounds()) == true)
			{
				coin102.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin103.getGlobalBounds()) == true)
			{
				coin103.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin104.getGlobalBounds()) == true)
			{
				coin104.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin105.getGlobalBounds()) == true)
			{
				coin105.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin106.getGlobalBounds()) == true)
			{
				coin106.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin107.getGlobalBounds()) == true)
			{
				coin107.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin108.getGlobalBounds()) == true)
			{
				coin108.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin109.getGlobalBounds()) == true)
			{
				coin109.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin110.getGlobalBounds()) == true)
			{
				coin110.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin111.getGlobalBounds()) == true)
			{
				coin111.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin112.getGlobalBounds()) == true)
			{
				coin112.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin113.getGlobalBounds()) == true)
			{
				coin113.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin114.getGlobalBounds()) == true)
			{
				coin114.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin115.getGlobalBounds()) == true)
			{
				coin115.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin116.getGlobalBounds()) == true)
			{
				coin116.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin117.getGlobalBounds()) == true)
			{
				coin117.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin018.getGlobalBounds()) == true)
			{
				coin118.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin119.getGlobalBounds()) == true)
			{
				coin119.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin120.getGlobalBounds()) == true)
			{
				coin120.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin121.getGlobalBounds()) == true)
			{
				coin121.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin122.getGlobalBounds()) == true)
			{
				coin122.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin123.getGlobalBounds()) == true)
			{
				coin123.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin124.getGlobalBounds()) == true)
			{
				coin124.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin125.getGlobalBounds()) == true)
			{
				coin125.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin126.getGlobalBounds()) == true)
			{
				coin126.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin127.getGlobalBounds()) == true)
			{
				coin127.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin128.getGlobalBounds()) == true)
			{
				coin128.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin129.getGlobalBounds()) == true)
			{
				coin129.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin130.getGlobalBounds()) == true)
			{
				coin130.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin131.getGlobalBounds()) == true)
			{
				coin131.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin132.getGlobalBounds()) == true)
			{
				coin132.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin133.getGlobalBounds()) == true)
			{
				coin133.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin134.getGlobalBounds()) == true)
			{
				coin134.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin135.getGlobalBounds()) == true)
			{
				coin135.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin136.getGlobalBounds()) == true)
			{
				coin136.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin137.getGlobalBounds()) == true)
			{
				coin137.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin138.getGlobalBounds()) == true)
			{
				coin138.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin139.getGlobalBounds()) == true)
			{
				coin139.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin140.getGlobalBounds()) == true)
			{
				coin140.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin141.getGlobalBounds()) == true)
			{
				coin141.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin142.getGlobalBounds()) == true)
			{
				coin142.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin143.getGlobalBounds()) == true)
			{
				coin143.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin144.getGlobalBounds()) == true)
			{
				coin144.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin145.getGlobalBounds()) == true)
			{
				coin145.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin146.getGlobalBounds()) == true)
			{
				coin146.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin147.getGlobalBounds()) == true)
			{
				coin147.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin148.getGlobalBounds()) == true)
			{
				coin148.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin149.getGlobalBounds()) == true)
			{
				coin149.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin150.getGlobalBounds()) == true)
			{
				coin150.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin151.getGlobalBounds()) == true)
			{
				coin151.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin152.getGlobalBounds()) == true)
			{
				coin152.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin153.getGlobalBounds()) == true)
			{
				coin153.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin154.getGlobalBounds()) == true)
			{
				coin154.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin155.getGlobalBounds()) == true)
			{
				coin155.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin156.getGlobalBounds()) == true)
			{
				coin156.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin157.getGlobalBounds()) == true)
			{
				coin157.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin158.getGlobalBounds()) == true)
			{
				coin158.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin159.getGlobalBounds()) == true)
			{
				coin159.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin160.getGlobalBounds()) == true)
			{
				coin160.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin161.getGlobalBounds()) == true)
			{
				coin161.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin162.getGlobalBounds()) == true)
			{
				coin162.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin163.getGlobalBounds()) == true)
			{
				coin163.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin164.getGlobalBounds()) == true)
			{
				coin164.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin165.getGlobalBounds()) == true)
			{
				coin165.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin166.getGlobalBounds()) == true)
			{
				coin166.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin167.getGlobalBounds()) == true)
			{
				coin167.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin168.getGlobalBounds()) == true)
			{
				coin168.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin169.getGlobalBounds()) == true)
			{
				coin169.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin170.getGlobalBounds()) == true)
			{
				coin170.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin171.getGlobalBounds()) == true)
			{
				coin171.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin172.getGlobalBounds()) == true)
			{
				coin172.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin173.getGlobalBounds()) == true)
			{
				coin173.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin74.getGlobalBounds()) == true)
			{
				coin174.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin175.getGlobalBounds()) == true)
			{
				coin175.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin176.getGlobalBounds()) == true)
			{
				coin176.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin177.getGlobalBounds()) == true)
			{
				coin177.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin178.getGlobalBounds()) == true)
			{
				coin178.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin179.getGlobalBounds()) == true)
			{
				coin179.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin0_51.getGlobalBounds()) == true)
			{
				coin0_51.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin0_52.getGlobalBounds()) == true)
			{
				coin0_52.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin0_71.getGlobalBounds()) == true)
			{
				coin0_71.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin0_72.getGlobalBounds()) == true)
			{
				coin0_72.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin0_88.getGlobalBounds()) == true)
			{
				coin0_88.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin0_89.getGlobalBounds()) == true)
			{
				coin0_89.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin_207.getGlobalBounds()) == true)
			{
				coin_207.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin200.getGlobalBounds()) == true)
			{
				coin200.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin201.getGlobalBounds()) == true)
			{
				coin201.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin202.getGlobalBounds()) == true)
			{
				coin202.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin203.getGlobalBounds()) == true)
			{
				coin203.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin205.getGlobalBounds()) == true)
			{
				coin205.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin206.getGlobalBounds()) == true)
			{
				coin206.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin207.getGlobalBounds()) == true)
			{
				coin207.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin208.getGlobalBounds()) == true)
			{
				coin208.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin209.getGlobalBounds()) == true)
			{
				coin209.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin210.getGlobalBounds()) == true)
			{
				coin210.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin211.getGlobalBounds()) == true)
			{
				coin211.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin212.getGlobalBounds()) == true)
			{
				coin212.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin213.getGlobalBounds()) == true)
			{
				coin213.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin214.getGlobalBounds()) == true)
			{
				coin214.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin215.getGlobalBounds()) == true)
			{
				coin215.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin216.getGlobalBounds()) == true)
			{
				coin216.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin217.getGlobalBounds()) == true)
			{
				coin217.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin218.getGlobalBounds()) == true)
			{
				coin218.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin219.getGlobalBounds()) == true)
			{
				coin219.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin220.getGlobalBounds()) == true)
			{
				coin220.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin221.getGlobalBounds()) == true)
			{
				coin221.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin222.getGlobalBounds()) == true)
			{
				coin222.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin223.getGlobalBounds()) == true)
			{
				coin223.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin224.getGlobalBounds()) == true)
			{
				coin224.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin225.getGlobalBounds()) == true)
			{
				coin225.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin226.getGlobalBounds()) == true)
			{
				coin226.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin227.getGlobalBounds()) == true)
			{

				coin227.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin228.getGlobalBounds()) == true)
			{
				coin228.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin229.getGlobalBounds()) == true)
			{
				coin229.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin230.getGlobalBounds()) == true)
			{
				coin230.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin231.getGlobalBounds()) == true)
			{
				coin231.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin232.getGlobalBounds()) == true)
			{
				coin232.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin233.getGlobalBounds()) == true)
			{
				coin233.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin234.getGlobalBounds()) == true)
			{
				coin234.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin235.getGlobalBounds()) == true)
			{
				coin235.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin236.getGlobalBounds()) == true)
			{
				coin236.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin237.getGlobalBounds()) == true)
			{
				coin237.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin238.getGlobalBounds()) == true)
			{
				coin238.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin239.getGlobalBounds()) == true)
			{
				coin239.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin240.getGlobalBounds()) == true)
			{
				coin240.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin241.getGlobalBounds()) == true)
			{
				coin241.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin242.getGlobalBounds()) == true)
			{
				coin242.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin243.getGlobalBounds()) == true)
			{
				coin243.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin244.getGlobalBounds()) == true)
			{
				coin244.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin245.getGlobalBounds()) == true)
			{
				coin245.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin246.getGlobalBounds()) == true)
			{
				coin246.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin247.getGlobalBounds()) == true)
			{
				coin247.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin248.getGlobalBounds()) == true)
			{
				coin248.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin249.getGlobalBounds()) == true)
			{
				coin249.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin250.getGlobalBounds()) == true)
			{
				coin250.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin251.getGlobalBounds()) == true)
			{
				coin251.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin252.getGlobalBounds()) == true)
			{
				coin252.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin253.getGlobalBounds()) == true)
			{
				coin253.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin254.getGlobalBounds()) == true)
			{
				coin254.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin255.getGlobalBounds()) == true)
			{
				coin255.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin256.getGlobalBounds()) == true)
			{
				coin256.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin257.getGlobalBounds()) == true)
			{
				coin257.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin258.getGlobalBounds()) == true)
			{
				coin258.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin259.getGlobalBounds()) == true)
			{
				coin259.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin260.getGlobalBounds()) == true)
			{
				coin260.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin261.getGlobalBounds()) == true)
			{
				coin261.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin262.getGlobalBounds()) == true)
			{
				coin262.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin263.getGlobalBounds()) == true)
			{
				coin263.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin264.getGlobalBounds()) == true)
			{
				coin264.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin265.getGlobalBounds()) == true)
			{
				coin265.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin266.getGlobalBounds()) == true)
			{
				coin266.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin267.getGlobalBounds()) == true)
			{
				coin267.setColor(Color::Transparent);

				counter++;
			}
			if (pacman.getGlobalBounds().intersects(coin268.getGlobalBounds()) == true)
			{
				coin268.setColor(Color::Transparent);

				counter++;
			}



		//Move the shape on X axis by adding the velocity


		if (pacman.getGlobalBounds().intersects(ghost1.getGlobalBounds()) == true) //We check if shape1 intersects shape2
		{
		    pacman.move(-x ,-y);
		    lifes--;
		    window.clear();
		    pacman.setPosition(400,450);
		    sound6.play();
		}

		if (pacman.getGlobalBounds().intersects(ghost_2.getGlobalBounds()) == true) //We check if shape1 intersects shape2
		{
			pacman.move(-x, -y);
			lifes--;
			window.clear();
			pacman.setPosition(400, 450);
			sound6.play();
		}




		if (pacman.getGlobalBounds().intersects(ghost_3.getGlobalBounds()) == true)
		{
			pacman.move(-x, -y);
			lifes--;
			window.clear();
			pacman.setPosition(400, 450);
			sound6.play();
		}
		if (pacman.getGlobalBounds().intersects(ghost_4.getGlobalBounds()) == true){
			pacman.move(-x, -y);
			lifes--;
			window.clear();
			pacman.setPosition(400, 450);
			sound6.play();
		}
		 if(counter == 345){
                Play = false;
                Menu = false;
                End = true;

}

		if(lifes == 0){
		   Play = false;
		   Menu = false;
		   End = true;

		    }

        //rendering
        window.clear();
        window.draw(text4);
        window.draw(shape1);
        window.draw(coin01);
			window.draw(coin02);
			window.draw(coin03);
			window.draw(coin04);
			window.draw(coin05);
			window.draw(coin06);
			window.draw(coin07);
			window.draw(coin08);
			window.draw(coin09);
			window.draw(coin010);
			window.draw(coin011);
			window.draw(coin012);
			window.draw(coin013);
			window.draw(coin014);
			window.draw(coin015);
			window.draw(coin016);
			window.draw(coin017);
			window.draw(coin018);
			window.draw(coin019);
			window.draw(coin020);
			window.draw(coin021);
			window.draw(coin022);
			window.draw(coin023);
			window.draw(coin024);
			window.draw(coin025);
			window.draw(coin026);
			window.draw(coin027);
			window.draw(coin028);
			window.draw(coin029);
			window.draw(coin030);
			window.draw(coin031);
			window.draw(coin032);
			window.draw(coin033);
			window.draw(coin034);
			window.draw(coin035);
			window.draw(coin036);
			window.draw(coin037);
			window.draw(coin038);
			window.draw(coin039);
			window.draw(coin040);
			window.draw(coin041);
			window.draw(coin042);
			window.draw(coin043);
			window.draw(coin044);
			window.draw(coin045);
			window.draw(coin046);
			window.draw(coin047);
			window.draw(coin048);
			window.draw(coin049);
			window.draw(coin050);
			window.draw(coin051);
			window.draw(coin052);
			window.draw(coin053);
			window.draw(coin054);
			window.draw(coin055);
			window.draw(coin056);
			window.draw(coin057);
			window.draw(coin058);
			window.draw(coin059);
			window.draw(coin060);
			window.draw(coin061);
			window.draw(coin062);
			window.draw(coin063);
			window.draw(coin064);
			window.draw(coin065);
			window.draw(coin066);
			window.draw(coin067);
			window.draw(coin068);
			window.draw(coin069);
			window.draw(coin070);
			window.draw(coin071);
			window.draw(coin072);
			window.draw(coin073);
			window.draw(coin074);
			window.draw(coin075);
			window.draw(coin076);
			window.draw(coin077);
			window.draw(coin078);
			window.draw(coin079);
			window.draw(coin080);
			window.draw(coin081);
			window.draw(coin082);
			window.draw(coin083);
			window.draw(coin084);
			window.draw(coin085);
			window.draw(coin086);
			window.draw(coin087);
			window.draw(coin088);
			window.draw(coin089);
			window.draw(coin090);
			window.draw(coin091);
			window.draw(coin092);
			window.draw(coin1);
			window.draw(coin2);
			window.draw(coin3);
			window.draw(coin4);
			window.draw(coin5);
			window.draw(coin6);
			window.draw(coin7);
			window.draw(coin8);
			window.draw(coin9);
			window.draw(coin10);
			window.draw(coin11);
			window.draw(coin12);
			window.draw(coin13);
			window.draw(coin14);
			window.draw(coin15);
			window.draw(coin16);
			window.draw(coin17);
			window.draw(coin18);
			window.draw(coin19);
			window.draw(coin20);
			window.draw(coin21);
			window.draw(coin22);
			window.draw(coin23);
			window.draw(coin24);
			window.draw(coin25);
			window.draw(coin26);
			window.draw(coin27);
			window.draw(coin28);
			window.draw(coin29);
			window.draw(coin30);
			window.draw(coin31);
			window.draw(coin32);
			window.draw(coin33);
			window.draw(coin34);
			window.draw(coin35);
			window.draw(coin36);
			window.draw(coin37);
			window.draw(coin38);
			window.draw(coin39);
			window.draw(coin40);
			window.draw(coin41);
			window.draw(coin42);
			window.draw(coin43);
			window.draw(coin44);
			window.draw(coin45);
			window.draw(coin46);
			window.draw(coin47);
			window.draw(coin48);
			window.draw(coin49);
			window.draw(coin50);
			window.draw(coin51);
			window.draw(coin52);
			window.draw(coin53);
			window.draw(coin54);
			window.draw(coin55);
			window.draw(coin51);
			window.draw(coin52);
			window.draw(coin53);
			window.draw(coin54);
			window.draw(coin55);
			window.draw(coin56);
			window.draw(coin57);
			window.draw(coin58);
			window.draw(coin59);
			window.draw(coin60);
			window.draw(coin61);
			window.draw(coin62);
			window.draw(coin63);
			window.draw(coin64);
			window.draw(coin65);
			window.draw(coin66);
			window.draw(coin67);
			window.draw(coin68);
			window.draw(coin69);
			window.draw(coin70);
			window.draw(coin71);
			window.draw(coin72);
			window.draw(coin73);
			window.draw(coin74);
			window.draw(coin75);
			window.draw(coin76);
			window.draw(coin77);
			window.draw(coin78);
			window.draw(coin79);
			window.draw(coin80);
			window.draw(coin81);
			window.draw(coin82);
			window.draw(coin83);
			window.draw(coin84);
			window.draw(coin85);
			window.draw(coin86);
			window.draw(coin87);
			window.draw(coin88);
			window.draw(coin89);
			window.draw(coin90);
			window.draw(coin91);
			window.draw(coin92);
			window.draw(coin93);
			window.draw(coin94);
			window.draw(coin95);
			window.draw(coin96);
			window.draw(coin97);
			window.draw(coin98);
			window.draw(coin99);
			window.draw(coin100);
			window.draw(coin101);
			window.draw(coin102);
			window.draw(coin103);
			window.draw(coin104);
			window.draw(coin105);
			window.draw(coin106);
			window.draw(coin107);
			window.draw(coin108);
			window.draw(coin109);
			window.draw(coin110);
			window.draw(coin111);
			window.draw(coin112);
			window.draw(coin113);
			window.draw(coin114);
			window.draw(coin115);
			window.draw(coin116);
			window.draw(coin117);
			window.draw(coin118);
			window.draw(coin119);
			window.draw(coin120);
			window.draw(coin121);
			window.draw(coin122);
			window.draw(coin123);
			window.draw(coin124);
			window.draw(coin125);
			window.draw(coin126);
			window.draw(coin127);
			window.draw(coin128);
			window.draw(coin129);
			window.draw(coin130);
			window.draw(coin131);
			window.draw(coin132);
			window.draw(coin133);
			window.draw(coin134);
			window.draw(coin135);
			window.draw(coin136);
			window.draw(coin137);
			window.draw(coin138);
			window.draw(coin139);
			window.draw(coin140);
			window.draw(coin141);
			window.draw(coin142);
			window.draw(coin143);
			window.draw(coin144);
			window.draw(coin145);
			window.draw(coin146);
			window.draw(coin147);
			window.draw(coin148);
			window.draw(coin149);
			window.draw(coin150);
			window.draw(coin151);
			window.draw(coin152);
			window.draw(coin153);
			window.draw(coin154);
			window.draw(coin155);
			window.draw(coin156);
			window.draw(coin157);
			window.draw(coin158);
			window.draw(coin159);
			window.draw(coin160);
			window.draw(coin161);
			window.draw(coin162);
			window.draw(coin163);
			window.draw(coin164);
			window.draw(coin165);
			window.draw(coin165);
			window.draw(coin166);
			window.draw(coin167);
			window.draw(coin168);
			window.draw(coin169);
			window.draw(coin170);
			window.draw(coin171);
			window.draw(coin172);
			window.draw(coin173);
			window.draw(coin174);
			window.draw(coin175);
			window.draw(coin176);
			window.draw(coin177);
			window.draw(coin178);
			window.draw(coin179);
			window.draw(coin200);
			window.draw(coin201);
			window.draw(coin202);
			window.draw(coin203);
			window.draw(coin205);
			window.draw(coin206);
			window.draw(coin207);
			window.draw(coin208);
			window.draw(coin209);
			window.draw(coin210);
			window.draw(coin211);
			window.draw(coin212);
			window.draw(coin213);
			window.draw(coin214);
			window.draw(coin215);
			window.draw(coin216);
			window.draw(coin217);
			window.draw(coin218);
			window.draw(coin219);
			window.draw(coin220);
			window.draw(coin221);
			window.draw(coin222);
			window.draw(coin223);
			window.draw(coin224);
			window.draw(coin225);
			window.draw(coin226);
			window.draw(coin227);
			window.draw(coin228);
			window.draw(coin229);
			window.draw(coin230);
			window.draw(coin231);
			window.draw(coin232);
			window.draw(coin233);
			window.draw(coin234);
			window.draw(coin235);
			window.draw(coin236);
			window.draw(coin237);
			window.draw(coin238);
			window.draw(coin239);
			window.draw(coin240);
			window.draw(coin241);
			window.draw(coin242);
			window.draw(coin243);
			window.draw(coin244);
			window.draw(coin245);
			window.draw(coin246);
			window.draw(coin247);
			window.draw(coin248);
			window.draw(coin249);
			window.draw(coin250);
			window.draw(coin251);
			window.draw(coin252);
			window.draw(coin253);
			window.draw(coin254);
			window.draw(coin255);
			window.draw(coin256);
			window.draw(coin257);
			window.draw(coin258);
			window.draw(coin259);
			window.draw(coin260);
			window.draw(coin261);
			window.draw(coin262);
			window.draw(coin263);
			window.draw(coin264);
			window.draw(coin265);
			window.draw(coin266);
			window.draw(coin267);
			window.draw(coin268);
			window.draw(coin_207);
			window.draw(coin0_71);
			window.draw(coin0_72);
			window.draw(coin0_51);
			window.draw(coin0_52);
			window.draw(coin0_88);
			window.draw(coin0_89);
			window.draw(text4);
         window.draw(ghost1);
         window.draw(ghost_2);
         window.draw(ghost_3);
         window.draw(ghost_4);
        window.draw(pacman);
        window.display();

    while(End == true){
            if(lifes==0){
            window.clear();
            sound5.play();
            window.draw(text2);
            window.display();
            }
            else if(counter == 345){

               window.clear();
                window.draw(text3);
                window.display();
            }
            while(window.pollEvent(event)){
                if(event.type == Event::KeyPressed && Keyboard::Enter){
                       Menu = true;
                       Play = false;
                       End = false;
                }
                if(event.type == Event::Closed){
                    window.close();
                }
            }
                }
    }
    }
    // window.close();
    return 0;
}
