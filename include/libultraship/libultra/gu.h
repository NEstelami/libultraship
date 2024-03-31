#ifndef ULTRA64_GU_H
#define ULTRA64_GU_H

#define GU_PI 3.1415926

#define ROUND(x) (s32)(((x) >= 0.0) ? ((x) + 0.5) : ((x)-0.5))

void guMtxIdent(Mtx* mtx);
void guMtxIdentF(float mf[4][4]);

void guOrtho(Mtx* m, f32 l, f32 r, f32 b, f32 t, f32 n, f32 f, f32 scale);
void guOrthoF(float m[4][4], f32 l, f32 r, f32 b, f32 t, f32 n, f32 f, f32 scale);

void guPerspective(Mtx* m, u16* perspNorm, f32 fovy, f32 aspect, f32 near, f32 far, f32 scale);
void guPerspectiveF(float mf[4][4], u16* perspNorm, f32 fovy, f32 aspect, f32 near, f32 far, f32 scale);

void guLookAt(Mtx* m, f32 xEye, f32 yEye, f32 zEye, f32 xAt, f32 yAt, f32 zAt, f32 xUp, f32 yUp, f32 zUp);
void guLookAtF(float mf[4][4], f32 xEye, f32 yEye, f32 zEye, f32 xAt, f32 yAt, f32 zAt, f32 xUp, f32 yUp, f32 zUp);

void guLookAtHilite(Mtx* m, LookAt* l, Hilite* h, f32 xEye, f32 yEye, f32 zEye, f32 xAt, f32 yAt, f32 zAt, f32 xUp,
                    f32 yUp, f32 zUp, f32 xl1, f32 yl1, f32 zl1, f32 xl2, f32 yl2, f32 zl2, s32 hiliteWidth,
                    s32 hiliteHeight);
void guLookAtHiliteF(float mf[4][4], LookAt* l, Hilite* h, f32 xEye, f32 yEye, f32 zEye, f32 xAt, f32 yAt, f32 zAt,
                     f32 xUp, f32 yUp, f32 zUp, f32 xl1, f32 yl1, f32 zl1, f32 xl2, f32 yl2, f32 zl2, s32 hiliteWidth,
                     s32 hiliteHeight);

void guRotate(Mtx* m, f32 a, f32 x, f32 y, f32 z);
void guRotateF(float m[4][4], f32 a, f32 x, f32 y, f32 z);

void guScale(Mtx* mtx, f32 x, f32 y, f32 z);
void guTranslate(Mtx* mtx, f32 x, f32 y, f32 z);

void guPosition(Mtx* m, f32 rot, f32 pitch, f32 yaw, f32 scale, f32 x, f32 y, f32 z);
void guPositionF(float mf[4][4], f32 rot, f32 pitch, f32 yaw, f32 scale, f32 x, f32 y, f32 z);

void guMtxF2L(float mf[4][4], Mtx* m);
void guMtxL2F(float m1[4][4], Mtx* m2);

void guNormalize(float* x, float* y, float* z);

void guMtxCatL(Mtx* m, Mtx* n, Mtx* res);
void guRotateRPY(Mtx* m, float r, float p, float h);

#endif
