/* genspkt.c functions, in separate proto due to packet structs */
int sndFlags( struct flags_spacket *flags, struct player *pl, int howmuch);
int sndKills( struct kills_spacket *kills, struct player *pl);
int sndLogin( struct plyr_login_spacket* login, struct player* pl);
int sndPStatus( struct pstatus_spacket *pstatus, struct player *pl);
int sndPhaser(struct phaser_spacket *ph, struct phaser_s_spacket *phs, struct phaser *phase, int i, int howmuch);
int sndPlanet(struct planet_spacket *pl, struct planet *plan, int howmuch);
int sndPlanetLoc(struct planet_loc_spacket *pll, struct planet *plan);
int sndPlasma(struct plasma_info_spacket *tpi, struct plasma_spacket *tp, struct torp *t, int i, int howmuch);
int sndPlayerInfo( struct plyr_info_spacket *cpli, struct player *pl);
int sndSSelf(struct you_short_spacket *youp, struct player* pl, int howmuch);
int sndSelfShip(struct youss_spacket *self, struct player *pl);
int updtMessageSMessage(struct message *cur);
int updtPlayer( struct player_spacket *cpl, struct player *pl, int howmuch);
void sendVKills(void);
void sendVKills(void);
void sendVPlanets(void);
void updtMessage(struct mesg_spacket *msg, struct message *cur);
