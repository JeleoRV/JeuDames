// TESTS GOOGLETEST

#include "jeu.h"
#include "gtest/gtest.h"

using namespace std;

	
class pionTest : public ::testing::Test{
	protected:
	virtual void SetUp(){
		dame.promotion();
	}
		
	virtual void TearDown(){
		//
	}
		
	pion pion_noir = pion(NOIR);
	pion pion_blanc = pion(BLANC);
	pion dame = pion();
};
	
TEST_F(pionTest, pionCouleur){
	EXPECT_EQ(NOIR, pion_noir.getCouleur());
	EXPECT_EQ(BLANC, pion_blanc.getCouleur());
}
	
TEST_F(pionTest, pionRang){
	EXPECT_EQ(DAME, dame.getRang());
	EXPECT_EQ(false, dame.promotion());
}
	
class caseTest : public ::testing::Test{
protected:
	virtual void SetUp() {

	}

	virtual void TearDown() {
		//
	}


};