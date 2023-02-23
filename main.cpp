#include <gtk/gtk.h>

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);

    // Create a new window
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Management");
    g_signal_connect(G_OBJECT(window), "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Create a new grid to hold the widgets
    GtkWidget *grid = gtk_grid_new();
    gtk_container_add(GTK_CONTAINER(window), grid);

    // Create a label for the volume sliders
    GtkWidget *volume_label = gtk_label_new("Volume");

    // Create the first slider
    GtkWidget *volume_slider1 = gtk_scale_new_with_range(GTK_ORIENTATION_VERTICAL, 0, 100, 1);
    gtk_range_set_value(GTK_RANGE(volume_slider1), 50);

    // Create the second slider
    GtkWidget *volume_slider2 = gtk_scale_new_with_range(GTK_ORIENTATION_VERTICAL, 0, 100, 1);
    gtk_range_set_value(GTK_RANGE(volume_slider2), 50);

    // Add the volume label and sliders to the grid
    gtk_grid_attach(GTK_GRID(grid), volume_label, 0, 0, 1, 2);
    gtk_grid_attach(GTK_GRID(grid), volume_slider1, 1, 1, 2, 1);
    gtk_grid_attach(GTK_GRID(grid), volume_slider2, 1, 1, 2, 1);

    // Create the buttons
    GtkWidget *button1 = gtk_toggle_button_new_with_label("Button 1");
    GtkWidget *button2 = gtk_toggle_button_new_with_label("Button 2");
    GtkWidget *button3 = gtk_toggle_button_new_with_label("Button 3");
    GtkWidget *button4 = gtk_toggle_button_new_with_label("Button 4");
    GtkWidget *button5 = gtk_toggle_button_new_with_label("Button 5");

    // Add the buttons to the grid
    gtk_grid_attach(GTK_GRID(grid), button1, 0, 2, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), button2, 1, 2, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), button3, 2, 2, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), button4, 3, 2, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), button5, 4, 2, 1, 1);

    // Show the window and enter the main event loop
    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}
