const int reset_code { 0 };

enum class e_colors {
    Black = 30,
    Red = 31,
    Green =  32,
    Yellow = 33,
    Blue = 34,
    Magneta = 35,
    Cyan = 36,
    White = 37,
};

enum class e_color_mode
{
    Foreground = 0,
    Background = 10,
};

enum class e_styles
{
    Bold = 1,
    Underline = 4,
    Inverse = 7, //Inverse colors
};

enum class e_style_state
{
    On = 0,
    Off = 20,
};

namespace CodesConverter
{
    int colors_enum_to_assci_code_int(e_colors color, e_color_mode mode);
    int styles_enum_to_assci_code_int(e_styles style, e_style_state state);
}