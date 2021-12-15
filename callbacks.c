#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "fichier.h"
int x=0;
int t[5]={0,0,0,0,0};
Produit p;
/*________________________page d'acceuil_____________________________________________*/
void
on_button_fiche_clicked                (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowacc, *windowaff,*treeview2;

windowacc=lookup_widget(objet,"acceuil");
gtk_widget_destroy(windowacc);

windowaff=lookup_widget(objet,"affiche");
windowaff=create_affiche();
gtk_widget_show(windowaff);

treeview2 = lookup_widget (windowaff, "treeview2");
affiche1(treeview2,"produit1.txt");
}
////////////////////////////
void
on_button_recherche_clicked            (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowrech,*windowacc;

windowacc=lookup_widget(objet,"acceuil");
gtk_widget_destroy(windowacc);

windowrech=create_Recherche();
gtk_widget_show(windowrech);}
////////////////////////////
void
on_button_nouveau_clicked              (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowajout,*windowacc;

windowacc=lookup_widget(objet,"acceuil");
gtk_widget_destroy(windowacc);

windowajout=create_ajout();
gtk_widget_show(windowajout);}
////////////////////////////
void
on_button_supp_clicked                 (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowsup,*windowacc;

windowacc=lookup_widget(objet,"acceuil");
gtk_widget_destroy(windowacc);

windowsup=create_supprimer();
gtk_widget_show(windowsup);}
/////////////////////////////
void
on_button_es_clicked                   (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowmodif,*windowacc;

windowacc=lookup_widget(objet,"acceuil");
gtk_widget_destroy(windowacc);

windowmodif=create_Modification();
gtk_widget_show(windowmodif);}
////////////////////////////
void
on_buttondashboard_clicked             (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowdash,*windowacc,*treeview1;

windowacc=lookup_widget(objet,"acceuil");
gtk_widget_destroy(windowacc);

windowdash=lookup_widget(objet,"dashboard");
windowdash=create_dashboard();
gtk_widget_show(windowdash);

dashboard("produit1.txt");
treeview1 = lookup_widget (windowdash, "treeview1");
affiche1(treeview1,"dashboard.txt");}
///////////////////////////
void
on_button_quitter_clicked              (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowacc;

windowacc=lookup_widget(objet,"acceuil");
gtk_widget_destroy(windowacc);
}
/*______________________bouton quitter____________________________________________________*/
void
on_button_fermer2_clicked              (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowmodif;

windowmodif=lookup_widget(objet,"Modification");
gtk_widget_destroy(windowmodif);}
//////////////////////////
void
on_button_fermer_clicked               (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowaff;

windowaff=lookup_widget(objet,"affiche");
gtk_widget_destroy(windowaff);}
/////////////////////////
void
on_quitter3_clicked                    (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowdash;

windowdash=lookup_widget(objet,"dashboard");
gtk_widget_destroy(windowdash);
}
/*________________________les boutons home___________________________________*/
void
on_home1_clicked                       (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowacc, *windowajout;

windowajout=lookup_widget(objet,"ajout");
gtk_widget_destroy(windowajout);

windowacc=create_acceuil();
gtk_widget_show(windowacc);}
void
on_home2_clicked                       (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowacc, *windowsup;

windowsup=lookup_widget(objet,"supprimer");
gtk_widget_destroy(windowsup);

windowacc=create_acceuil();
gtk_widget_show(windowacc);}
void
on_home3_clicked                       (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowacc, *windowrech;

windowrech=lookup_widget(objet,"Recherche");
gtk_widget_destroy(windowrech);

windowacc=create_acceuil();
gtk_widget_show(windowacc);}
void
on_home4_clicked                       (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowacc, *windowmodif;

windowmodif=lookup_widget(objet,"Modification");
gtk_widget_destroy(windowmodif);

windowacc=create_acceuil();
gtk_widget_show(windowacc);}
void 
on_home5_clicked                       (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowacc, *windowaff;

windowaff=lookup_widget(objet,"affiche");
gtk_widget_destroy(windowaff);

windowacc=create_acceuil();
gtk_widget_show(windowacc);}
void
on_home6_clicked                       (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowacc, *windowdash;

windowdash=lookup_widget(objet,"dashboard");
gtk_widget_destroy(windowdash);

windowacc=create_acceuil();
gtk_widget_show(windowacc);}
/*________bouton ok_____________________________________________________________________*/
void
on_button_ok_clicked                   (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowajout, *windowen;

windowen=lookup_widget(objet,"enregistrement");
gtk_widget_destroy(windowen);
}
/*__________________________les boutons annuler___________________________________________________________*/
void
on_button_annuler1_clicked             (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowajout;

windowajout=lookup_widget(objet,"ajout");
gtk_widget_destroy(windowajout);
windowajout=create_ajout();
gtk_widget_show(windowajout);
}
void
on_annuler2_clicked                    (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowsup;

windowsup=lookup_widget(objet,"supprimer");
gtk_widget_destroy(windowsup);
windowsup=create_supprimer();
gtk_widget_show(windowsup);
}
void
on_annuler3_clicked                    (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowrech;

windowrech=lookup_widget(objet,"Recherche");
gtk_widget_destroy(windowrech);
windowrech=create_Recherche();
gtk_widget_show(windowrech);
}
void
on_annuler4_clicked                    (GtkWidget *objet, gpointer user_data)
{GtkWidget *windowmodif;

windowmodif=lookup_widget(objet,"Modification");
gtk_widget_destroy(windowmodif);
windowmodif=create_Modification();
	gtk_widget_show(windowmodif);}

/*________________________les boutons radios du window ajout________________________________________*/
void
on_radiobutton1_toggled                (GtkToggleButton *togglebutton,gpointer         user_data)
{if(gtk_toggle_button_get_active (GTK_RADIO_BUTTON(togglebutton)))
    x=1;}
void
on_radiobutton2_toggled                (GtkToggleButton *togglebutton,gpointer         user_data)
{if(gtk_toggle_button_get_active (GTK_RADIO_BUTTON(togglebutton)))
    x=2;}
void
on_radiobutton3_toggled                (GtkToggleButton *togglebutton,gpointer         user_data)
{if(gtk_toggle_button_get_active (GTK_RADIO_BUTTON(togglebutton)))
    x=3;}
void
on_radiobutton4_toggled                (GtkToggleButton *togglebutton,gpointer         user_data)
{if(gtk_toggle_button_get_active (GTK_RADIO_BUTTON(togglebutton)))
    x=4;}
void
on_radiobutton5_toggled                (GtkToggleButton *togglebutton,gpointer         user_data)
{if(gtk_toggle_button_get_active (GTK_RADIO_BUTTON(togglebutton)))
    x=5;}
void
on_radiobutton6_toggled                (GtkToggleButton *togglebutton,gpointer         user_data)
{if(gtk_toggle_button_get_active (GTK_RADIO_BUTTON(togglebutton)))
    x=6;}
void
on_radiobutton7_toggled                (GtkToggleButton *togglebutton,gpointer         user_data)
{if(gtk_toggle_button_get_active (GTK_RADIO_BUTTON(togglebutton)))
    x=7;}
/*____________________case a cocher du window ajout_____________________________________________*/
void
on_checkbutton1_toggled                (GtkToggleButton *togglebutton,gpointer         user_data)
{if(gtk_toggle_button_get_active (togglebutton))
 t[0]=1;}
void
on_checkbutton2_toggled                (GtkToggleButton *togglebutton, gpointer         user_data)
{if(gtk_toggle_button_get_active (togglebutton))
 t[1]=1;}
void
on_checkbutton3_toggled                (GtkToggleButton *togglebutton, gpointer         user_data)
{if(gtk_toggle_button_get_active (togglebutton))
 t[2]=1;}
void
on_checkbutton4_toggled                (GtkToggleButton *togglebutton,gpointer         user_data)
{if(gtk_toggle_button_get_active (togglebutton))
 t[3]=1;}
void
on_checkbutton5_toggled                (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{if(gtk_toggle_button_get_active (togglebutton))
 t[4]=1;}
/*_____________________________ajout___________________________________________________________*/
void
on_button_valider01_clicked            (GtkWidget       *button, gpointer         user_data)
{GtkWidget *windowen;
 GtkWidget* input;
 Produit p2;
 GtkWidget* output ;
 GtkWidget *j,*m,*a;//combo
 GtkWidget *entree,*sortie,*max,*min;//spin
char ch1[5],ch2[5],ch3[5];
int r,i;
FILE *f=NULL;
 input = lookup_widget(button, "entry_ref") ; 
 strcpy(p.reference,gtk_entry_get_text(GTK_ENTRY(input))); 
 input = lookup_widget(button, "entry_des") ; 
 strcpy(p.designation,gtk_entry_get_text(GTK_ENTRY(input))); 
 input = lookup_widget(button, "entry_fournisseur") ; 
 strcpy(p.fournisseur,gtk_entry_get_text(GTK_ENTRY(input))); 
 input = lookup_widget(button, "entry_prixu") ; 
 p.prix_unite=atof(gtk_entry_get_text(GTK_ENTRY(input)));
/////les boutons radio
if(x==1) strcpy(p.unite_mesure,"Kg");
else if(x==2)  strcpy(p.unite_mesure,"L");
else if(x==3)  strcpy(p.unite_mesure,"boite");
else if(x==4)  strcpy(p.unite_mesure,"unité");
else if(x==5)  strcpy(p.unite_mesure,"botte");
else if(x==6)  strcpy(p.unite_mesure,"baguette");
else strcpy(p.unite_mesure,"sac");
////les spinbuttons
entree=lookup_widget(button,"spinbuttonentre");
sortie=lookup_widget(button,"spinbuttonsortie");  
max=lookup_widget(button,"spinbutton1");
min=lookup_widget(button,"spinbutton2");
//recuperer les valeurs des spinbutton en utilisant la fct gtk_spin_button_get_value_as_int qui retourne l'entier choisi par user
p.qte.entree=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(entree));
p.qte.sortie=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(sortie));
p.qte.stock_max=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(max));
p.qte.seuil_min=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(min));
////combobox
j=lookup_widget(button, "comboboxje") ; 
strcpy(ch1,gtk_combo_box_get_active_text(GTK_COMBO_BOX(j)));
m=lookup_widget(button, "comboboxme") ; 
strcpy(ch2,gtk_combo_box_get_active_text(GTK_COMBO_BOX(m)));
a=lookup_widget(button, "comboboxae") ; 
strcpy(ch3,gtk_combo_box_get_active_text(GTK_COMBO_BOX(a)));
sprintf(p.date_expiration,"%s/%s/%s",ch1,ch2,ch3);

j=lookup_widget(button, "comboboxjm") ; 
strcpy(ch1,gtk_combo_box_get_active_text(GTK_COMBO_BOX(j)));
m=lookup_widget(button, "comboboxmm") ; 
strcpy(ch2,gtk_combo_box_get_active_text(GTK_COMBO_BOX(m)));
a=lookup_widget(button, "comboboxam") ; 
strcpy(ch3,gtk_combo_box_get_active_text(GTK_COMBO_BOX(a)));
sprintf(p.qte.date_mvt,"%s/%s/%s",ch1,ch2,ch3);

input=lookup_widget(button, "categorie") ; 
strcpy(p.categorie,gtk_combo_box_get_active_text(GTK_COMBO_BOX(input)));
////////////case a cocher
strcpy(p.etagere,"");
if(t[0]==1)
strcat(p.etagere,"A");
if(t[1]==1)
strcat(p.etagere,"B");
if(t[2]==1)
strcat(p.etagere,"C");
if(t[3]==1)
strcat(p.etagere,"D");
if(t[4]==1)
strcat(p.etagere,"E");


r=ajout("produit1.txt",p);
if(r==1)
{windowen=create_enregistrement();
gtk_widget_show(windowen);}
else
{ output = lookup_widget(button, "label80") ;
gtk_label_set_text(GTK_LABEL(output),"ajout non efectué");
}
}
/*______________________suppression d'un produit________________________________________________*/
void
on_suppression_clicked                 (GtkWidget *objet, gpointer user_data)
{ GtkWidget* input;
  GtkWidget* output ;
char ref[20],msg[50];
int r;
 output = lookup_widget(objet, "label80s") ;
 input = lookup_widget(objet, "entry_refs") ;
 
 strcpy(ref,gtk_entry_get_text(GTK_ENTRY(input))); 
 r=supprimer("produit1.txt",ref);
 if(r==-1)
    strcpy(msg,"Suppression non effectuée\n");
  else
    strcpy(msg,"suppression effectuée avec succès \n");
 gtk_label_set_text(GTK_LABEL(output),msg);
}
/*_________________________page recherche________________________________________________*/
void
on_chercher2_clicked                   (GtkWidget       *button,gpointer         user_data)
{GtkWidget* input;
  GtkWidget* output ;
char ref[15],ch[10];
Produit e;
input = lookup_widget(button, "entry4") ;
strcpy(ref,gtk_entry_get_text(GTK_ENTRY(input))); 
e=recherche("produit1.txt",ref);

if(strcmp(e.reference,ref)==0)
{//mawjoud
output=lookup_widget(button,"entry_stock_actuel");
sprintf(ch,"%d",e.qte.stock_actuel);
gtk_entry_set_text(GTK_ENTRY(output),ch);

output=lookup_widget(button,"entry_libelle");
gtk_entry_set_text(GTK_ENTRY(output),e.designation);

output=lookup_widget(button,"entry_prix");
sprintf(ch,"%f",e.prix_unite);
gtk_entry_set_text(GTK_ENTRY(output),ch);

output=lookup_widget(button,"entrymax");
sprintf(ch,"%d",e.qte.stock_max);
gtk_entry_set_text(GTK_ENTRY(output),ch);

output=lookup_widget(button,"entrymin");
sprintf(ch,"%d",e.qte.seuil_min);
gtk_entry_set_text(GTK_ENTRY(output),ch);

output=lookup_widget(button,"entry_cat");
gtk_entry_set_text(GTK_ENTRY(output),e.categorie);

output=lookup_widget(button,"entryetat");
gtk_entry_set_text(GTK_ENTRY(output),e.qte.alerte);
}
else{
///mch mawjoud
GtkWidget *windowatt;
windowatt=create_attention_rech();
gtk_widget_show(windowatt);
}
}
/*__________________________________________________________________________________*/
void
on_ok_rech_clicked                     (GtkWidget       *button,gpointer         user_data)
{GtkWidget *windowrech,*windowatt;

windowatt=lookup_widget(button,"attention_rech");
gtk_widget_destroy(windowatt);
}
/*____________________page de modif______________________________________________________*/
void
on_chercher3_clicked                   (GtkWidget       *button,gpointer         user_data)
{GtkWidget* input,* output,*windowmodif;
char ref[15],ch[11],j[3],m[3],a[5];
Produit e;
int combo,combo_date;


input = lookup_widget(button, "entry_ref") ;
strcpy(ref,gtk_entry_get_text(GTK_ENTRY(input))); 
e=recherche("produit1.txt",ref);

if(strcmp(e.reference,ref)==0)
{//mawjoud

output=lookup_widget(button,"label94");
sprintf(ch,"%d",e.qte.entree);
gtk_label_set_text(GTK_LABEL(output),ch);

output=lookup_widget(button,"label97");
sprintf(ch,"%d",e.qte.sortie);
gtk_label_set_text(GTK_LABEL(output),ch);

output=lookup_widget(button,"label98");
sprintf(ch,"%d",e.qte.stock_max);
gtk_label_set_text(GTK_LABEL(output),ch);

output=lookup_widget(button,"label96");
sprintf(ch,"%d",e.qte.seuil_min);
gtk_label_set_text(GTK_LABEL(output),ch);


output=lookup_widget(button,"entry11");
gtk_entry_set_text(GTK_ENTRY(output),e.designation);

output=lookup_widget(button,"entry15");
gtk_entry_set_text(GTK_ENTRY(output),e.unite_mesure);

output=lookup_widget(button,"entry12");
gtk_entry_set_text(GTK_ENTRY(output),e.fournisseur);

output=lookup_widget(button,"entry16");
gtk_entry_set_text(GTK_ENTRY(output),e.etagere);

output=lookup_widget(button,"entry_prix");
sprintf(ch,"%f",e.prix_unite);
gtk_entry_set_text(GTK_ENTRY(output),ch);

output=lookup_widget(button,"entrydatemvt");
sprintf(ch,"%s",e.qte.date_mvt);
gtk_entry_set_text(GTK_ENTRY(output),ch);

///pour faire un affichage dans le combobox
windowmodif=lookup_widget(button,"Modification");
if(strcmp(e.categorie,"Legumes")==0)
	  combo=0;
	else
		if(strcmp(e.categorie,"Fruits")==0)
		  combo=1;
	else
		if(strcmp(e.categorie,"Boisson")==0)
		  combo=2;
	else
		if(strcmp(e.categorie,"Produit_congelés")==0)
		  combo=3;
	else
		if(strcmp(e.categorie,"Ingrédiants")==0)
		  combo=4;
	else
		if(strcmp(e.categorie,"Epicerie")==0)
		  combo=5;
	else
		if(strcmp(e.categorie,"Linge_et_produits_d'entretien")==0)
		  combo=4;
	else
		combo=7;
	gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(windowmodif,"combocategorie")),combo);

   	
	strncpy(j, e.date_expiration, 2);
	combo_date=atoi(j);
	gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(windowmodif,"combobox1")),combo_date-1);
	
	strncpy(m, e.date_expiration+3, 2);
	combo_date=atoi(m);
	gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(windowmodif,"combobox2")),combo_date-1);
	
 	strncpy(a, e.date_expiration+6, 4);
	combo_date=atoi(a);
	gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(windowmodif,"combobox3")),combo_date-2021);

	strncpy(j, e.qte.date_mvt, 2);
	combo_date=atoi(j);
	gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(windowmodif,"combobox4")),combo_date-1);

	strncpy(m, e.qte.date_mvt+3, 2);
	combo_date=atoi(m);
	gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(windowmodif,"combobox5")),combo_date-1);

	strncpy(a, e.qte.date_mvt+6, 4);
	combo_date=atoi(a);
	gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(windowmodif,"combobox6")),combo_date-2021);
}
else{
///mch mawjoud
GtkWidget *windowrech,*windowatt;
windowrech=lookup_widget(button,"Recherche");
gtk_widget_destroy(windowrech);
windowatt=create_attention_rech();
gtk_widget_show(windowatt);
}
}
/*____________________________________________________________________________*/
void
on_enregistremodif_clicked             (GtkWidget       *button,gpointer         user_data)
{GtkWidget* input,* output,*windowen;
GtkWidget *entree,*sortie,*max,*min;//spin
Produit e;
GtkWidget *j,*m,*a;//combo
char ch1[5],ch2[5],ch3[5];
int r;

input = lookup_widget(button, "entry_ref") ;
 strcpy(e.reference,gtk_entry_get_text(GTK_ENTRY(input)));
 input = lookup_widget(button, "entry11") ; 
 strcpy(e.designation,gtk_entry_get_text(GTK_ENTRY(input))); 
 input = lookup_widget(button, "entry15") ; 
 strcpy(e.unite_mesure,gtk_entry_get_text(GTK_ENTRY(input))); 
 input = lookup_widget(button, "entry12") ; 
 strcpy(e.fournisseur,gtk_entry_get_text(GTK_ENTRY(input))); 
 input = lookup_widget(button, "entry16") ; 
 strcpy(e.etagere,gtk_entry_get_text(GTK_ENTRY(input))); 
 input = lookup_widget(button, "entry_prix") ; 
 e.prix_unite=atof(gtk_entry_get_text(GTK_ENTRY(input)));

////les spinbuttons
entree=lookup_widget(button,"spinbuttonenter");
sortie=lookup_widget(button,"spinbuttonout");  
max=lookup_widget(button,"spinbuttonmax");
min=lookup_widget(button,"spinbuttonmin");
//recuperer les valeurs des spinbutton en utilisant la fct gtk_spin_button_get_value_as_int qui retourne l'entier choisi par user
e.qte.entree=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(entree));
e.qte.sortie=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(sortie));
e.qte.stock_max=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(max));
e.qte.seuil_min=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(min));

////combobox
j=lookup_widget(button, "combobox1") ; 
strcpy(ch1,gtk_combo_box_get_active_text(GTK_COMBO_BOX(j)));
m=lookup_widget(button, "combobox2") ; 
strcpy(ch2,gtk_combo_box_get_active_text(GTK_COMBO_BOX(m)));
a=lookup_widget(button, "combobox3") ; 
strcpy(ch3,gtk_combo_box_get_active_text(GTK_COMBO_BOX(a)));
sprintf(e.date_expiration,"%s/%s/%s",ch1,ch2,ch3);

j=lookup_widget(button, "combobox4") ; 
strcpy(ch1,gtk_combo_box_get_active_text(GTK_COMBO_BOX(j)));
m=lookup_widget(button, "combobox5") ; 
strcpy(ch2,gtk_combo_box_get_active_text(GTK_COMBO_BOX(m)));
a=lookup_widget(button, "combobox6") ; 
strcpy(ch3,gtk_combo_box_get_active_text(GTK_COMBO_BOX(a)));
sprintf(e.qte.date_mvt,"%s/%s/%s",ch1,ch2,ch3);

input=lookup_widget(button, "combocategorie") ; 
strcpy(e.categorie,gtk_combo_box_get_active_text(GTK_COMBO_BOX(input)));
///appel a la fct
r=modif("produit1.txt",e);
if(r==1)
{windowen=create_enregistrement();
gtk_widget_show(windowen);}
else
{ output = lookup_widget(button, "label101") ;
gtk_label_set_text(GTK_LABEL(output),"Modification non efectué");
}
}
/*_______________________fenetre_treeview_____________________________________________*/
/////bouton supprimer
void
on_supp_aff_clicked                    (GtkWidget       *button, gpointer         user_data)
{	GtkWidget *treeview,*windowaff;
	GtkTreeModel  *model;
        GtkTreeSelection *selection;
        GtkTreeIter iter;
gchar* ref;
int r;

 windowaff=lookup_widget(button,"affiche");
 treeview=lookup_widget(windowaff,"treeview2");
 selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(treeview));
        if (gtk_tree_selection_get_selected(selection, &model, &iter))
        {
		gtk_tree_model_get (model,&iter,0,&ref,-1);
		r=supprimer("produit1.txt",ref);
		affiche1(treeview,"produit1.txt");
		
	}

}
/*__________________________________________________________________________________________*/
/*___________________________________________________________________________________________*/
////bouton modif
void
on_modif_aff_clicked                   (GtkWidget       *button,gpointer         user_data)
{	GtkWidget *windowmodif,*windowaff,* treeview,*output;
	GtkTreeModel *model;
        GtkTreeSelection *selection;
        GtkTreeIter iter;
gchar* ref,* des,* cat,* unite,* date_e,*etagere,*date_mvt,*alerte,*fournisseur;
gint qte,entree,sortie,max,min,combo,combo_date;
gfloat prix;
char ch[11],j[3],m[3],a[5];
char chprix[15];////
Produit e;

	windowaff=lookup_widget(button,"affiche");
        treeview=lookup_widget(windowaff,"treeview2");
        selection = gtk_tree_view_get_selection(GTK_TREE_VIEW(treeview));
 if (gtk_tree_selection_get_selected(selection, &model, &iter))
        {
		gtk_tree_model_get (model,&iter,0,&ref,1,&des,2,&cat,3,&unite,4,&date_e,5,&etagere,6,&qte,7,&entree,8,&sortie,9,&date_mvt,10,&max,11,&min,12,&alerte,13,&fournisseur,14,&prix,-1);

		gtk_widget_destroy(windowaff);
		windowmodif=lookup_widget(button,"Modification");
		windowmodif=create_Modification();
		gtk_widget_show(windowmodif);


	output=lookup_widget(windowmodif,"entry11");
	gtk_entry_set_text(GTK_ENTRY(output),des);

	output=lookup_widget(windowmodif,"entry_ref");
	gtk_entry_set_text(GTK_ENTRY(output),ref);

	output=lookup_widget(windowmodif,"entry15");
	gtk_entry_set_text(GTK_ENTRY(output),unite);

	output=lookup_widget(windowmodif,"entry12");
	gtk_entry_set_text(GTK_ENTRY(output),fournisseur);

	output=lookup_widget(windowmodif,"entry16");
	gtk_entry_set_text(GTK_ENTRY(output),etagere);

	/*output=lookup_widget(windowmodif,"entry_prix");////yakra feha bl ghalet
	sprintf(chprix,"%f",prix);
	gtk_entry_set_text(GTK_ENTRY(output),chprix);*/

	/*output=lookup_widget(windowmodif,"label110");
	sprintf(chprix,"%d",entree);
	gtk_label_set_text(GTK_LABEL(output),entree);*/

	/*gtk_spin_button_set_value(GTK_SPIN_BUTTON(lookup_widget(windowmodif,"spinbuttonenter")),entree);
	gtk_spin_button_set_value(GTK_SPIN_BUTTON(lookup_widget(windowmodif,"spinbuttonout")),sortie);
	gtk_spin_button_set_value(GTK_SPIN_BUTTON(lookup_widget(windowmodif,"spinbuttonmax")),max);
	gtk_spin_button_set_value(GTK_SPIN_BUTTON(lookup_widget(windowmodif,"spinbuttonmin")),min);*/

      e=recherche("produit1.txt",ref);
	
	output=lookup_widget(windowmodif,"entry_prix");
	sprintf(chprix,"%f",e.prix_unite);
	gtk_entry_set_text(GTK_ENTRY(output),chprix);

	output=lookup_widget(windowmodif,"label94");
	sprintf(ch,"%d",e.qte.entree);
	gtk_label_set_text(GTK_LABEL(output),ch);

	output=lookup_widget(windowmodif,"label97");
	sprintf(ch,"%d",e.qte.sortie);
	gtk_label_set_text(GTK_LABEL(output),ch);

	output=lookup_widget(windowmodif,"label98");
	sprintf(ch,"%d",e.qte.stock_max);
	gtk_label_set_text(GTK_LABEL(output),ch);

	output=lookup_widget(windowmodif,"label96");
	sprintf(ch,"%d",e.qte.seuil_min);
	gtk_label_set_text(GTK_LABEL(output),ch);



	if(strcmp(cat,"Legumes")==0)
	  combo=0;
	else
		if(strcmp(cat,"Fruits")==0)
		  combo=1;
	else
		if(strcmp(cat,"Boisson")==0)
		  combo=2;
	else
		if(strcmp(cat,"Produit_congelés")==0)
		  combo=3;
	else
		if(strcmp(cat,"Ingrédiants")==0)
		  combo=4;
	else
		if(strcmp(cat,"Epicerie")==0)
		  combo=5;
	else
		if(strcmp(cat,"Linge_et_produits_d'entretien")==0)
		  combo=4;
	else
		combo=7;
	gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(windowmodif,"combocategorie")),combo);

   	
	strncpy(j, date_e, 2);
	combo_date=atoi(j);
	gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(windowmodif,"combobox1")),combo_date-1);
	
	strncpy(m, date_e+3, 2);
	combo_date=atoi(m);
	gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(windowmodif,"combobox2")),combo_date-1);
	
 	strncpy(a, date_e+6, 4);
	combo_date=atoi(a);
	gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(windowmodif,"combobox3")),combo_date-2021);

	strncpy(j, date_mvt, 2);
	combo_date=atoi(j);
	gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(windowmodif,"combobox4")),combo_date-1);

	strncpy(m, date_mvt+3, 2);
	combo_date=atoi(m);
	gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(windowmodif,"combobox5")),combo_date-1);

	strncpy(a, date_mvt+6, 4);
	combo_date=atoi(a);
	gtk_combo_box_set_active(GTK_COMBO_BOX(lookup_widget(windowmodif,"combobox6")),combo_date-2021);


	}

}





