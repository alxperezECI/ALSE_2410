//Estructura punto

struct punto {
    float x; //miembro
    float y; //miembro

    punto operator+(const punto& p) const
    {
        return {x + p.x, y + p.y};
    }
};