# Notes ..

```c
//Calculator.c file
#include<gtk/gtk.h>
#include<string.h> char input[20], operation, resultString[20];
float n1, n2, result;
GtkWidget *label2;
GtkWidget *entry; void onPButtonClicked() {
    strcpy(input, gtk_entry_get_text(GTK_ENTRY(entry)));
    strcat(input, "+");
    gtk_entry_set_text(GTK_ENTRY(entry), input);
} void onSButtonClicked() {
    strcpy(input, gtk_entry_get_text(GTK_ENTRY(entry)));
    strcat(input, "-");
    gtk_entry_set_text(GTK_ENTRY(entry), input);
}
void onDButtonClicked() {
    strcpy(input, gtk_entry_get_text(GTK_ENTRY(entry)));
    strcat(input, "/");
    gtk_entry_set_text(GTK_ENTRY(entry), input);
}
void onMButtonClicked() {
    strcpy(input, gtk_entry_get_text(GTK_ENTRY(entry)));
    strcat(input, "*");
    gtk_entry_set_text(GTK_ENTRY(entry), input);
}
void onClearButtonClicked() {
    gtk_entry_set_text(GTK_ENTRY(entry), "");
    strcpy(input, "");
} void onEqualButtonClicked() {
    strcpy(input, gtk_entry_get_text(GTK_ENTRY(entry)));
    sscanf(input, "%f%c%f", &n1, &operation, &n2);
    switch(operation) {
        case '+':
            result = n1+n2;
            break;
        case '-':
            result = n1-n2;
            break;
        case '*':
            result = n1*n2;
            break;
        case '/':
            result = n1/n2;
            break;
        default:
            onClearButtonClicked();
    }
    sprintf(resultString, "%.2f", result);
    gtk_label_set_text(GTK_LABEL(label2), resultString);
}
int main() { -gtk_init(NULL, NULL);
    GtkWidget *window;
    GtkWidget *mainBox;
    GtkWidget *entryBox;
    GtkWidget *resultBox;
    GtkWidget *operationsBox;
    GtkWidget *label1;
    GtkWidget *plusButton;
    GtkWidget *minusButton;
    GtkWidget *divideButton;
    GtkWidget *multiplyButton;
    GtkWidget *equalButton;
    GtkWidget *clearButton;
    GtkBuilder *builder;
    builder = gtk_builder_new_from_file("design.glade");
    window = GTK_WIDGET(gtk_builder_get_object(builder,"window"));
    mainBox = GTK_WIDGET(gtk_builder_get_object(builder, "mainBox"));
    entryBox = GTK_WIDGET(gtk_builder_get_object(builder, "entryBox"));
    resultBox = GTK_WIDGET(gtk_builder_get_object(builder, "resultBox"));
    operationsBox = GTK_WIDGET(gtk_builder_get_object(builder, "operationsBox"));
    label1 = GTK_WIDGET(gtk_builder_get_object(builder, "label1"));
    label2 = GTK_WIDGET(gtk_builder_get_object(builder, "label2"));
    plusButton = GTK_WIDGET(gtk_builder_get_object(builder, "plusButton"));
    minusButton = GTK_WIDGET(gtk_builder_get_object(builder, "minusButton"));
    divideButton = GTK_WIDGET(gtk_builder_get_object(builder, "divideButton"));
    multiplyButton = GTK_WIDGET(gtk_builder_get_object(builder, "multiplyButton"));
    equalButton = GTK_WIDGET(gtk_builder_get_object(builder, "equalButton"));
    entry = GTK_WIDGET(gtk_builder_get_object(builder, "entry"));
    clearButton = GTK_WIDGET(gtk_builder_get_object(builder, "clearButton"));
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    g_signal_connect(plusButton, "clicked", G_CALLBACK(onPButtonClicked), NULL);
    g_signal_connect(minusButton, "clicked", G_CALLBACK(onSButtonClicked), NULL);
    g_signal_connect(divideButton, "clicked", G_CALLBACK(onDButtonClicked), NULL);
    g_signal_connect(multiplyButton, "clicked", G_CALLBACK(onMButtonClicked), NULL);
    g_signal_connect(clearButton, "clicked", G_CALLBACK(onClearButtonClicked), NULL);
    g_signal_connect(equalButton, "clicked", G_CALLBACK(onEqualButtonClicked), NULL);
    gtk_widget_show(window);
    gtk_main();
}
```