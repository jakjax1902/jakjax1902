#include <stdio.h>
int main(void) {
    // declaring the variables
	int numPlayers;
	int weightTeamA = 0;
	int weightTeamB = 0;
	int weightPlayerA;
	int weightPlayerB;
    int i = 0;

	// reading buffer
    scanf("%d", &numPlayers);

    for(i = 0; i < numPlayers; i++) {
        scanf("%d", &weightPlayerA);
        weightTeamA += weightPlayerA;

        scanf("%d", &weightPlayerB);
        weightTeamB += weightPlayerB;
    }

    // saves the team with weight advantage
    int advantageTeam = (weightTeamB > weightTeamA) + 1;

    printf("Team %d has an advantage\n", advantageTeam);
    printf("Total weight for team 1: %d\n", weightTeamA);
    printf("Total weight for team 2: %d\n", weightTeamB);
        
    return 0;
}
