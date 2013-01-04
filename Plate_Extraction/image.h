#ifndef IMAGE_H
#define IMAGE_H

class Image
{
public:
    Image(unsigned width, unsigned height);
    virtual ~Image() {}

    /**
     * @brief getWidth
     * @return La largeur de l'image
     */
    virtual inline unsigned getWidth() const { return m_width; }

    /**
     * @brief getHeight
     * @return La hauteur de l'image
     */
    virtual inline unsigned getHeight() const { return m_height; }

protected:
    unsigned m_width, m_height;
};

#endif // IMAGE_H