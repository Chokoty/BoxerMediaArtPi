#include <stdio.h>

int lspan, wspan;

void ArtMain(void)
{
	printf("\n"
		"\n"
		"\n"
		"\n"
		"                          :=++++.+=                                                           ==.+++==.\n"
		"                        ##:.@+:+*#@=                                                         *##++=**.=#+\n"
		"                      :@###++     +:                                                         *.     @:@#@#.\n"
		"                      @++#**#   :*#                                                          :#*    @*#+*#*\n"
		"                      :#*@:.     #=                    :==             =:.                    *=     .+##@\n"
		"                       ++:     *@*=+**:           .++###*:*#=       ***=#@#*=+            =+*=+*#=    .=#.\n"
		"                     =+*      @#*=+.++#           ######*##.#:     +*:#**##@##=          =*#::=+###     .*+.\n"
		"                  =++.     ==@*#**:*+*#           :@+##=+*#=+*     @.+##+=*@=@           =#+#==**#*#=:     =++:\n"
		"               *+=          :##+#+##+#@=:         :@****=*#+:       =+#=+#+#+@          :=@*+#+##+#@          :=*=\n"
		"              @            .#@##+##.    .+*=     +@*##:=@.             *#:+##*@.     +++.  . =@#+##@+.           :#\n"
		"             ==     .:   .###*+@#          .=*+ *@#*#*#*:               ***##*#@: *++.         :#@+*@##    =      #\n"
		"             +=      :*   ##****+           +# *+ :=*#*                   @*+=. #= @.           #+*+*@*   #.      *.\n"
		"              #        :##: .=*#:    #=    #= =.   #=                       *+   := #=    *+    +#+=. +#*:        #\n"
		"               #     ==+.    #:     #.:#  #:     .#                          =#      *= .# *=     *=    :==:     #\n"
		"               :+ .+=       #.      @   :+=*+..=*+                             #+: .++*+:   #      ++      .+=  #\n"
		"                *+#+       #.       #        ::                                  .=:        #       ++       *#=#\n"
		"                  #.+*. .+*        .*                                                       #        .*=  .*==+\n"
		"                   #  :::          *.                                                       +:          ==:  #\n"
		"                   @               @                                                        .#              .*\n"
		"                  =++*+====::=:===+**                                                       @++===:::.:::=+*=*\n"
		"                  *##+#+:.:.= ::=+*@.                                                       +@++:::.+::.=+**@#+\n"
		"                 =:    .::====::.  :*.                                                     :*. .::======:.    =\n"
		"                 *                   =*                                                  .*:                   *\n"
		"                :.                     #.                                               =+                     +\n"
		"                =               #       #                                               #       #              :\n"
		"                :.              #       *.                                             +:       #              +\n"
		"                 =              #        #                                             @        #              +\n"
		"                 +             =:        #                                             #        *              +\n"
		"                .=             *         #                                            .#        =:             +\n"
		"                *              #       :+=                                             +=        *             =:\n"
		"                *             +=.======.=*                                             #::====:: #.             *\n"
		"                ++===:  .:.  *@=.        :#                                           @        .:*@=  ..   :===+=\n"
		"                 #   .:=:.:+@ .#          :#                                         @           @ .@=::===.   @\n"
		"                 @         #   =#          =#                                       #.          @.  ==         @\n"
		"                 @         #    :#          +=                                     #.          @.    #         # \n"
		"                 @        #       #=         @                                    .#         +#      =+       :*\n"
		"                 +*      ++        :#=       +=                                   *.       +#.        #.      @.\n"
		"                 #      .#           .@      ++                                   #      :@            @      :*\n"
		"                #      :#            #=     .#                                     @      #:            #      :#\n"
		"               #      =*            :#      @                                      .#      @             #      :*\n"
		"              #.     =*             *=     #:                                       *:     #:             #      ++\n"
		"             :*     ++              #:     #                                         @     *=              #.     @\n"
		"             @     #:               #:    #                                          ++    *=               *=    =*\n"
		"            :#    #                 *=   :#                                           @    *:                =*    @\n"
		"            @   :#                  ++   @                                             #   #.                  #   :#\n"
		"           @.  ++                   +*  #.                                             +=  @.                   #.  +#\n"
		"  =:===::=#   *+::::======:::::::.. #=  #  .... .                                       @  #: ......::::=:=:=:::.#:  :#:::===::\n"
		"        *#   #            .   ....  @  :# .::::::============      .==================  @  .@ .........           =*   @:\n"
		"      +#.  +#                     .#=*. @.                                             =* .*+#                     .#.  =#:\n"
		"    +# =#. @                     :@  :   +*.                                         :#=  .=  @                      @ .@ .@.\n"
		"    :+.     **.                   ++++==   +++                                     +*=   :==+++                   .*+   . .*.\n"
		"      =*+     +#:                       ++*:.#@@                                .@@+ :*+=.                      :@:     *+:\n"
		"         ::***#*+                           ...                                  .:::.                          #*##**::\n"
		"  +++++++====+=:===+=++++*++++++++++++*++++++++++++                           ++++++++++++++++++++*++++*++++=+=+=:======+++++++\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"\n"
		"Picture's License: Alain Delmas GFDL 1.2 commons.wikimedia.org/wiki/File:Attitude_droite1.jpg\n");
}

void ArtAttackA(void)
{
	printf("\n"
		"\n"
		"\n"
		"                       :*:*+=#*+=                         :\n"
		"                     #*+=+**@  .:#          #*:=:=::=....=::=.\n"
		"                    .@@*=##*#:==:=+         *.:===..          :+\n"
		"                    #@###+ ++=+:+#.         * =:     .::::. :::                 +::=:::*.\n"
		"                    @+*#==: +.=*#*=         +:...::..     =:     .:=========+= #        =+\n"
		"                    :. #.+.:#:*@+#+=:.                  ...:==++=:@  .     . @#===:*      #\n"
		"                .=+*:  +=*:#+###*=   .::::#+: .=++*#**++==:.. #..:#  ..    . **+=  +++*  =:\n"
		"              :*:   =:. *.:+=*##@         + .==.              #:**#=     .:: +:     *=   :=\n"
		"            .*.     ....:*:==*=**         *            .:==++=++   .+==+#:=::#.===+###*#*#\n"
		"            #       .+  #  :..:#.         #:=::==++*+==.                 ...#*:           ++=\n"
		"            +         *.=*+:=:#.   =::====*                                .*                +*.\n"
		"            @          @:     *   #                         =+=+:           @       ==         +#\n"
		"            **       +*:     +.  ==                     =*+=    .=+*==     #        #          .:*\n"
		"            * #   :+= *      #   *                     @:         *:+=#@+=+#===++   #          ==#.\n"
		"             + *=#.         #    #                     @      :=:# * .*    +:    @*#            #==\n"
		"             #   ==        #:    #                     **   =##++@#@:@#:        #               @#\n"
		"             +.    ======++      #                      .++=.           +++===##               .#\n"
		"             ::                  #                                            .*               +:\n"
		"              #                  #                                            :+               #\n"
		"             :+.:..              *                                             #              ==\n"
		"             =###*#+####**##*##+@*                                             :#:==:==:==:.  @\n"
		"            @#. *=**++*++++:+=+*=#                                              @==:==:=::+*@#@=\n"
		"           @+==+:+ :: =+:.:=:::.+==                                            =#: +=.         +*\n"
		"          .*+#.# :==#+*.*==:=.=++.#.                                           *# +:  :=:.      :#\n"
		"          =:##** =*#*=***=.:==..+:+#:                                         #:** :+.        :  #:\n"
		"          +:=@##.=*@*=####::=:=.:===#+                                      .#=+  =       +=  =   #\n"
		"          #:=#.+ ++@=:++=++:::=+*::#*=#                                    =*==           #. *    @\n"
		"          # : .* :.+*:==+*=#::.=.++ ##@@:                                 :*.+            @ +     @\n"
		"         .+=::.=*  := .+:+.#..:++++=:*:+#=                                #+#=           .#       =*\n"
		"         +.#*=.:+=: +.+=+:.*==:=##=#+ ..*.                                #   =++        #         @\n"
		"         # ++: .==+==.::*==@ =..:.:*:== #                                 #      +*=    +#++=====+=@\n"
		"          +==:. =. .=.   : #==+:::      +:                               *.        :@+++:@         #.\n"
		"           =  .:::::=::+::==*:           @                               #         @     :#        #:\n"
		"           *          ::     ++          *:                              #        @       #=       #.\n"
		"           *          *       .*.         @                             =:       @         #=      #:\n"
		"           ::        *          =*:        #                            +:      #           #=     **\n"
		"            #       .+            =#       +=                           #     =#             #*     #*\n"
		"            #       #               #      +@                           #     ++              =#     #=\n"
		"            @     =+               .#      :@                            #     @                #*    @\n"
		"           #     :=                 *      =#.                           +=    ++                *=   :*\n"
		"          #      #                  #       #                             #     @                 @.   @\n"
		"         *      #                   *       #                             :+    @                  @   #.\n"
		"        :=      #                    *     .=                              #    #:                 .@  ++\n"
		"        #      +.                    #     +                               .*   ++                  @   @\n"
		"       .+      +                     .*    *                                #   =*                   #  # .::::.::=:=:::::\n"
		"       =.     *                       #    #             ...::::::==:=::::: :+   @ =::=:==:::=#@##+..@   @\n"
		"       *     * :::::=:==::::::::::::::=:   # ::::::::::.....                 #   @            :#=  . #:  =*  =*:           .\n"
		"   :=: *    .=                        :+   #                             .=+*.  :@=      *+=*:   ++++.  .###*.=:=+##.:::. :*\n"
		"       *    #                         :+   #                        #**#:.      =+@      ##=*#       :++= #=*.:###@.::====:\n"
		"       #   =.                         #+    #.                      +#*=:.      : @.     +#==*            #=:::.....\n"
		"       @   #               +.        *.*     =++==:::                 .=+*=+++=++*.\n"
		"       #:  =*             .##:       @ :*:=:::::==++*=\n"
		"       ##.  .#=           @*:@=      .=:                                                   . ....:....  ... ..  ...\n"
		"       @       ++=                                     ..:..:.:.....:::..:.. .... . .\n"
		"        ====+#*+*#@  .....:::=:::.::::::::.:::::.:.:..: .\n"
		"::::::.:..::.:::::.:...\n"
		"\n"
		"\n"
		"Picture's License: Alain Delmas GFDL 1.2 commons.wikimedia.org/wiki/File:Jab7.jpg\n");
}

void ArtAttackB(void)
{
	printf("\n"
		"                                         ..\n"
		"                                     :#*+++::++++\n"
		"                                    ##:.:....:: +#                                        ..=**++++:\n"
		"                                   @# :..: ::... ++                                      @==:      :#+\n"
		"                                  .@+..#=====++==+#                                     @:           #*\n"
		"                                  .@=#@=.#*+*=+*#@****#:                                .#++@**#@   . @\n"
		"                              =++*@+*@*=@:++=..:=@+*.:=@                                 .*::+#*#.   +#\n"
		"                           +#@+   .#+=@.==:==+.=:@#+==+*+=+=.                             @.:::+=+@*##*#=\n"
		"                         **          +#  .=.+= .+@          =#+++:.:==+++++++++=:===:#=+++::::..        .+*=\n"
		"                        .#            #*   =:. +@     :=    ++ @.@=..          ::.   .#                    :#=\n"
		"                        :#         +=  =##*##+*@##+=#@****##+ +=#.                    *=                     +*\n"
		"                         @          :#+ :@##*::@:+::@:     :+*#=*+===::::::::+=++++==:@=::=.                  #:\n"
		"                         @            #@=@*+++*@@@@@#                                      *@==:===           .@\n"
		"                        =*    .+    .@ :@ .+*=@#**=##                                      @*     .=++:        *+\n"
		"                        @      ##   @  @.    .@    @=                                      @=         =#.      .@\n"
		"                        @       =@.@  #+     #*   =@                                       #+                   @\n"
		"                       :*         #@:       .@.   #:                                       ##                   @\n"
		"                       .#           ##.     @.   :@                                        @:                  =#\n"
		"                       .#            .##+=+@=#+=*#                                          @.                 @.\n"
		"                       =+               +@.    .                                            #*                =@\n"
		"                       @+#*+=.         .@                                                   .@:               @.\n"
		"                     .#@ :*+##@@@@#@#@@@@                                                    =@ :==+=+=+===+==@\n"
		"                     #=@+      .:..    =@=                                                 +@##@#:    ..=+++#@+\n"
		"                    .#=*# . .  .. ..  =.+=#:                                              #*  #=+:=+++==:.   ++\n"
		"                    *=+   .:. :.  ..  .:.  *#                                            +.  :*#              @\n"
		"                    @  ... .. . . . ==..    =#                                          +    ##.              @.\n"
		"                   #:  . .... ..... *=.. . . +*                                       .:   .@#.       @       @.\n"
		"                  #:.. .. ..  ......@: .      @.                                     .+   :##        .#       *=\n"
		"                 =+ .:..:..:....:.. *#. ..     #*:                                  :+   =##         #:       .@\n"
		"                 @. .:..:::::.....  *#     .     :@.                               .=   #*#         .#         #+\n"
		"                #:=. .. . .::. .. :#+:++=:.  .:++*=#=                              #=  *:#         .@          :@\n"
		"                @                ** .@. .:=+++=     =#=                            @#.:@#.         @           .@\n"
		"               #+****+++++++*+++#:    #+              =#                           @+::.:=+**=    #:           #*\n"
		"              :#           +*          :#=             :#                        .@          :##+@: ...:....=+@#\n"
		"              *=          +#             =#*.           @.                       @            .#*.#@+:=:====: #.\n"
		"              #.         :#                .*#*:        :#                      @           :#+  . @         .@\n"
		"              #.         @                     =*#+      @                     @.         =#+      *#        @.\n"
		"              #+        #                        .#      #.                   #*        :#+         @:      =#\n"
		"             ##.       @.                        .@      *=                  .@        #@            @     .@\n"
		"           :@.        #+                         .#      ++                  **        .#            *#     .@:\n"
		"          #*        .@=                          .@      :*                  @         **             @       @.\n"
		"         @.        *#                             @      =*                 .@         @.             #=       @\n"
		"        @.       :#:                              *+     =*                 .@         @              :@       **\n"
		"       #:       +#                                 @=    =*                 .@        +*               *#      .@\n"
		"       @       #+                                   @:   .@                  @        @                 #*      @.\n"
		".     :#      @:   ...     .. .....:..    . ...      @    @. . .:...... .    @       +* .            ..  @:     #:     . . ..\n"
		"      #:    .#.                                      @.   **                 @.      @.   .     .         @.    @.      ... ..\n"
		"     +#    :#                    .                   #:*   ##                *+     +#     ....            @    @.\n"
		"  =+##    *#                    **.                  @:#:   +#               .@     #=     @   +           *@   #:\n"
		"=@*#     #:                    #. +                  :##+.   :@.              @:    @.     #=+*==:          @=  +@\n"
		"**+.    @                     *#**=#.                   .*#*   +#*:           .@    @.     +    .=    .#****#+   #=\n"
		" @     :@                    .#     #                      :##+..=@=           @.   #+     :...:.      =#*=.   :@ #*\n"
		" .@.    #:                   :      .                         :++:          :##.  :..@                    =+*###:  *@\n"
		"  +@     @.                                                             :**#=     += ##                         =*#*.\n"
		"   :@+#+ =#                                                           #*=       =*+*+#=\n"
		" . .   .=#+  . .  . ... ... .:.....   ...  .. . ... ...... .. ..  .   .+***++**#=\n"
		"                                            .      .   .  .. .  .   ...  ....     . .  ..... ... ......\n"
		"\n"
		"\n"
		"\n"
		"Picture's License: Alain Delmas GFDL 1.2 commons.wikimedia.org/wiki/File:Protection_passive1.jpg\n");
}

void ArtAttackTogether(void)
{
	printf("\n"
		"\n"
		"                                                :::\n"
		"                                               =#=*\n"
		"                                               .*.=\n"
		"                                             ..=#.*.+:.::\n"
		"                                         .:.. ..# #+.    =+                                        +.....:....::.:\n"
		"                                       .=:..:.:*# # .::=+  *                                       @              :+=\n"
		"                                      :+... =*::*:#      # =.                                      #=.:=:::::.       =+\n"
		"                                      + ::.*.  :#.#      :+:.                                                 ::==.    *.\n"
		"                                      .:=+#    :#.#    :++:#=                     :*++*++*.                       .*.   #.\n"
		"                      .+*###:            .     :# #     #:#+                    +#:       *+           .=+++=       *:   #\n"
		"                   +*#*::+ :##                 =#**      +                     +*         +#       .=#*=.   :#       #   #\n"
		"                :*@@#+@++:#:.##.                                               ##++==.   #*.=+***+#+:##      .*+:     #  #:\n"
		"                @.=++:#.*.*+++:#                                             :*.#+:==*@##*:.     .#@=+          @     @  =#*#\n"
		"                 @=+***+**+==@@+*                          =++=++*          =@+=:+@@#+.            @#=+        .#  .@#    .#\n"
		"                 :@          @+@*                     .====.      @.      :@= ==@*                  @#++      .@      :. ++\n"
		"          :#*+++*.@..= .++:  * @.    .:+++++++****@*==.      #    =*     #@      @                   +@@#*  =#*        =#=\n"
		"         *+=#=.. :#:  :*       .#*+++=.           @         +@*+==+@     @       @#       ==            +*@#+\n"
		"         #=:#*.+.: @          ##                  #.      =*@*=@*+*#     @=:+****@  =+===:.              #.\n"
		"         =* +#=.  :@#.   +#  @#:                   @ :+=+=  *##*#+@.      ...   @@+=                    :*\n"
		"          @ =.*#=##@:=+*#*:##:                ..== ##.     :# :# =@            @.                       #.\n"
		"          #::  = =*#                      *##=:...++     =#@+*#*#@#           @                         @\n"
		"          *= .  *@.                      :#             ***+=* @::#          @                         .@\n"
		"          @.=@#*+##+                     #.            .@*+:=:*.*#@         *=                         @.\n"
		"          =#++==*#+:@                    @.            #**=+:*.: @.        :#                        .@:\n"
		"            *=..    +*                   @             .#*:.  :=@+         @                        #@\n"
		"             #:     .@                   #                =*#**=         .#                       *#.\n"
		"              @+   .@##                  #                                #++===               =*+\n"
		"               =#*## .@                  *:                              *@     :=======.    *#.\n"
		"                      @:                 #:                            *+:.:==*:..      .:+#@=\n"
		"                      #*                 @                            @      :+== .:::=**+:@\n"
		"                      =*                .@                           *.     .# *           #.\n"
		"                      +@.*#.#=+:=:+=+++*#@                           *      # #             #\n"
		"                      @*#*+**+*+*==:   :+@                          #      # *       :       #\n"
		"                     *#+  +: :: .:=+++*+:+*                        #:     #.*        *:       #\n"
		"                    =#*#::*. ++..   ..:.. +*                      #:    .#=*         *:       .+\n"
		"                   :#=+:+##@###=#+*:*:+*:: *=                    #     *=+=          #         #\n"
		"                   @:+*##@#*#*+++#:#=**+**+ @                  .#     # #.           +         #\n"
		"                  @+=++.*###==. ::::=.+*+*+:@                 .#    .# #            #          #\n"
		"                 @#*#*.*+#*++#.+ :=:=+:: +#.=+               =@=.   # #            +:         :=\n"
		"                #=#+.=:::#*####=:=++==+  :*==@              =+  .+=+::+           =+          @\n"
		"               #+.*   * +==@:@==#==+:=*.:*#:*:@            #.      .+@           #=          :+\n"
		"               :#++*+++**+.@==:#++#+ *=.++:*:.:@          #          .#       .#@            @\n"
		"               #        .=## *: .=   + :   ..==@.       .#             @==  =#**            *#\n"
		"               #          .@+.:==*++=====+===:.*.      =*              =*@##= #=   ....=++*##=\n"
		"              +*          .+ :.  :#             @     *+             +*.      .#@==:=::.     ++\n"
		"              #:          #       #=            @    +*            +*           #=            #:\n"
		"              @          @         **           =*   @          :**              ##            #\n"
		"              @         #           =#           @. #+        *#=                 =@           #*\n"
		"              @        #              #+          @=#=       @                     :@          #*\n"
		"             ##      .@                :#=         +@       :+                      :@.        #*\n"
		"             @       .#                  =@:        @       +.                        *#       :#\n"
		"             @        #                    ++@     .@       #                          ++       @=\n"
		"             @       *=                      =#    .#       #                           @       .@.\n"
		"             @       #                         @:  .#      +:                           =#       =@\n"
		"             @      #                           +#  #     .#                             .@       ##\n"
		"             @     #=                             **@     #@                               @       @.\n"
		"            =#    #:                                #    #:#*   ....::.::.::::::=:=======+: @      *=.+=====+=+=++++==:.\n"
		":::======== #=   #=  :..:::::::===:=::==:=::=:::    *   +=  *# .:::::::............          @     .#\n"
		"            @   :#                                 :+   @    .@+                              @     @\n"
		"           +#   *=                                 #   @@+    :*##                            .@    =+\n"
		"           #=  +:@                                =+   @ =@    +++#                            +*    @\n"
		"           @   *:#=                              :+    @  #+   :+#=          @#+=@+      .@+###:#:   .#\n"
		"          @=   +=@          +@                  ==    :#. :@     #=          @#*+##       **:  :*@    #.\n"
		"        .@     #*           @##                =*    .##* *+     #+          ##.:=@         :#=   #+= :#\n"
		"        @=    #=           :@#@*             :+:     #:+# @   :+**           .==:.            .#*      @\n"
		"        :#@*+#             ++  +           =+.      +##@  @*@@@*                                 +*+=:*+\n"
		"           :                            :@#:..  = =**=     ..\n"
		".... ...... .. ...................::..::.@@*##@@@#+.:.====:==:==:+++=:+=======++++=+++=+=+=++++=+++++++++++=\n"
		"::::::.:.:.::.:...... ......  . ........   . .     ...    .\n"
		"\n"
		"\n"
		"Picture's License: Alain Delmas GFDL 1.2 commons.wikimedia.org/wiki/File:Crochet1.jpg\n");
}
