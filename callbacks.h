#include <gtk/gtk.h>

/*________________________page d'acceuil_____________________________________________*/
void
on_button_fiche_clicked                (GtkWidget *objet, gpointer user_data);
void
on_button_recherche_clicked            (GtkWidget *objet, gpointer user_data);
void
on_button_nouveau_clicked              (GtkWidget *objet, gpointer user_data);
void
on_button_supp_clicked                 (GtkWidget *objet, gpointer user_data);
void
on_button_es_clicked                   (GtkWidget *objet, gpointer user_data);
void
on_buttondashboard_clicked             (GtkWidget *objet, gpointer user_data);
void
on_button_quitter_clicked              (GtkWidget *objet, gpointer user_data);
/*__________________________bouton quitter___________________________________________________________*/
void
on_button_fermer2_clicked              (GtkWidget *objet, gpointer user_data);
void
on_button_fermer_clicked               (GtkWidget *objet, gpointer user_data);
void
on_quitter3_clicked                    (GtkWidget *objet, gpointer user_data);
/*__________________________les boutons annuler______________________________________________________*/
void
on_button_annuler1_clicked             (GtkWidget *objet, gpointer user_data);
void
on_annuler2_clicked                    (GtkWidget *objet, gpointer user_data);
void
on_annuler3_clicked                    (GtkWidget *objet, gpointer user_data);
void
on_annuler4_clicked                    (GtkWidget *objet, gpointer user_data);
/*____________________________________les boutons home_____________________________________________*/
void
on_home1_clicked                       (GtkWidget *objet, gpointer user_data);
void
on_home2_clicked                       (GtkWidget *objet, gpointer user_data);
void
on_home3_clicked                       (GtkWidget *objet, gpointer user_data);
void
on_home4_clicked                       (GtkWidget *objet, gpointer user_data);
void
on_home5_clicked                       (GtkWidget *objet, gpointer user_data);
void
on_home6_clicked                       (GtkWidget *objet, gpointer user_data);
void
on_button_ok_clicked                   (GtkWidget *objet, gpointer user_data);
/*______________________________pade d'ajout________________________________________________________________*/
void
on_button_valider01_clicked            (GtkWidget       *button,gpointer         user_data);
/*________________________page de suppression__________________________________________________________________*/
void
on_suppression_clicked                 (GtkWidget *objet, gpointer user_data);
/*_______________________________les boutons radio d'ajout______________________________________________________*/
void
on_radiobutton1_toggled                (GtkToggleButton *togglebutton,  gpointer         user_data);
void
on_radiobutton2_toggled                (GtkToggleButton *togglebutton, gpointer         user_data);
void
on_radiobutton3_toggled                (GtkToggleButton *togglebutton, gpointer         user_data);
void
on_radiobutton4_toggled                (GtkToggleButton *togglebutton, gpointer         user_data);
void
on_radiobutton5_toggled                (GtkToggleButton *togglebutton,  gpointer         user_data);
void
on_radiobutton7_toggled                (GtkToggleButton *togglebutton, gpointer         user_data);
void
on_radiobutton6_toggled                (GtkToggleButton *togglebutton,gpointer         user_data);
/*____________________________________case a cocher du page d'ajout__________________________________*/
void
on_checkbutton1_toggled                (GtkToggleButton *togglebutton, gpointer         user_data);
void
on_checkbutton2_toggled                (GtkToggleButton *togglebutton, gpointer         user_data);
void
on_checkbutton3_toggled                (GtkToggleButton *togglebutton, gpointer         user_data);
void
on_checkbutton4_toggled                (GtkToggleButton *togglebutton,gpointer         user_data);
void
on_checkbutton5_toggled                (GtkToggleButton *togglebutton, gpointer         user_data);
/*_____________________fenetre chercher________________________________________________________________*/
void
on_chercher2_clicked                   (GtkWidget       *button,gpointer         user_data);

void
on_ok_rech_clicked                     (GtkWidget      *button,gpointer         user_data);
/*__________________________fenetre modifier________________________________________________________________*/
void
on_chercher3_clicked                   (GtkWidget        *button,
                                        gpointer         user_data);

void
on_enregistremodif_clicked             (GtkWidget       *button,
                                        gpointer         user_data);
/*_________________________fenetre_affiche______________________________________________________________________*/
void
on_supp_aff_clicked                    (GtkWidget       *button, gpointer         user_data);

void
on_modif_aff_clicked                   (GtkWidget       *button,gpointer         user_data);
/*_______________________________________________________________________________________________________________*/

/*___________fenetre athentification____________________*/
void
on_back_authen_resto_clicked           (GtkWidget       *button,
                                        gpointer         user_data);

void
on_conx_athent_resto_activate          (GtkWidget       *button,
                                        gpointer         user_data);

void
on_anuuler_athent_resto_clicked        (GtkWidget       *button,
                                        gpointer         user_data);
/*_______________________________________________________________*/
