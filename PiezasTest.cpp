/**
 * Unit Tests for Piezas
**/

#include <gtest/gtest.h>
#include "Piezas.h"
 
class PiezasTest : public ::testing::Test
{
	protected:
		PiezasTest(){} //constructor runs before each test
		virtual ~PiezasTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(PiezasTest, sanityCheck)
{
	ASSERT_TRUE(true);
}

//TESTING DROPPIECE [0,0]->[2,0], first column
TEST(PiezasTest, dropPiece_00)
{
    Piezas juego = Piezas();
	ASSERT_EQ(juego.dropPiece(0), X);
}

TEST(PiezasTest, dropPiece_10)
{
    Piezas juego = Piezas();
    juego.dropPiece(0);
	ASSERT_EQ(juego.dropPiece(0), X);
}

TEST(PiezasTest, dropPiece_20)
{
    Piezas juego = Piezas();
    juego.dropPiece(0);
    juego.dropPiece(0);
	ASSERT_EQ(juego.dropPiece(0), X);
}

//TESTING DROPPIECE [0,1]->[2,1], second column
TEST(PiezasTest, dropPiece_01)
{
    Piezas juego = Piezas();
	ASSERT_EQ(juego.dropPiece(0), X);
}

TEST(PiezasTest, dropPiece_11)
{
    Piezas juego = Piezas();
    juego.dropPiece(1);
	ASSERT_EQ(juego.dropPiece(0), X);
}

TEST(PiezasTest, dropPiece_21)
{
    Piezas juego = Piezas();
    juego.dropPiece(1);
    juego.dropPiece(1);
	ASSERT_EQ(juego.dropPiece(1), X);
}

//TESTING DROPPIECE [0,2]->[2,2], second column
TEST(PiezasTest, dropPiece_02)
{
    Piezas juego = Piezas();
	ASSERT_EQ(juego.dropPiece(1), X);
}

TEST(PiezasTest, dropPiece_12)
{
    Piezas juego = Piezas();
    juego.dropPiece(2);
	ASSERT_EQ(juego.dropPiece(0), X);
}

TEST(PiezasTest, dropPiece_22)
{
    Piezas juego = Piezas();
    juego.dropPiece(2);
    juego.dropPiece(2);
	ASSERT_EQ(juego.dropPiece(2), X);
}

//TESTING DROPPIECE [0,3]->[2,3], second column
TEST(PiezasTest, dropPiece_03)
{
    Piezas juego = Piezas();
	ASSERT_EQ(juego.dropPiece(3), X);
}

TEST(PiezasTest, dropPiece_13)
{
    Piezas juego = Piezas();
    juego.dropPiece(3);
	ASSERT_EQ(juego.dropPiece(3), X);
}

TEST(PiezasTest, dropPiece_23)
{
    Piezas juego = Piezas();
    juego.dropPiece(3);
    juego.dropPiece(3);
	ASSERT_EQ(juego.dropPiece(3), X);
}

//OUT OF BOUNDS TESTING
TEST(PiezasTest, dropPiece_out_bound_lwr)
{
    Piezas juego = Piezas();
	ASSERT_EQ(juego.dropPiece(-1), Invalid);
}
TEST(PiezasTest, dropPiece_out_bound_upr)
{
    Piezas juego = Piezas();
	ASSERT_EQ(juego.dropPiece(4), Invalid);
}

//FULL COLUMN
TEST(PiezasTest, dropPiece_column_full)
{
    Piezas juego = Piezas();
    juego.dropPiece(0);
    juego.dropPiece(0);
    juego.dropPiece(0);
	ASSERT_EQ(juego.dropPiece(0), Invalid);
}

TEST(PiezasTest, pieceat_start)
{
    Piezas juego = Piezas();
	ASSERT_EQ(juego.pieceAt(0,2), Blank);
}

TEST(PiezasTest, pieceat_O)
{
    Piezas juego = Piezas();
	ASSERT_EQ(juego.pieceAt(0,2), Blank);
}
