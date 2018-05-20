/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCScribbleViewDelegate.h>

@protocol SCPerforming, SCMagicToolsBaseControllerDelegate, SCMagicToolsBaseControllerInternalDelegate;
@class UILabel, UIImageView, UIView, SCScribbleView, SCParticleAnimationManager, UIImage, UIColor, SCSentinel, NSString, SCMagicToolsEditHistory;

@interface SCMagicToolsBaseController : NSObject <SCScribbleViewDelegate> {

	id<SCPerforming> _undoPerformer;
	UILabel* _magicAlertLabel;
	BOOL _isOpen;
	BOOL _isDrawing;
	BOOL _isMagicking;
	BOOL _isAnimating;
	BOOL _isFrontalMode;
	BOOL _tapEnabled;
	BOOL _scribbleShouldClose;
	id<SCMagicToolsBaseControllerDelegate> _delegate;
	id<SCMagicToolsBaseControllerInternalDelegate> _internalDelegate;
	long long _toolType;
	UIImageView* _magicOverlay;
	long long _pinchMode;
	UIView* _baseView;
	SCScribbleView* _scribbleView;
	UIView* _magicContainerView;
	UIImageView* _magicView;
	UIImageView* _animationView;
	SCParticleAnimationManager* _particleAnimationManager;
	UIImage* _capturedImage;
	UIImage* _lastEditImage;
	UIImage* _maskImage;
	UIColor* _color;
	UIImage* _texture;
	SCSentinel* _sentinel;
	id<SCPerforming> _performer;
	NSString* _dispatchQueueLabel;
	SCMagicToolsEditHistory* _editHistory;
	double _scribbleLineWidth;
	double _scribbleTapRadius;
	Class _scribbleViewClass;
	Class _animationManagerClass;

}

@property (assign,nonatomic) BOOL isOpen;                                                                         //@synthesize isOpen=_isOpen - In the implementation block
@property (assign,nonatomic) BOOL isDrawing;                                                                      //@synthesize isDrawing=_isDrawing - In the implementation block
@property (assign,nonatomic) BOOL isMagicking;                                                                    //@synthesize isMagicking=_isMagicking - In the implementation block
@property (assign,nonatomic) BOOL isAnimating;                                                                    //@synthesize isAnimating=_isAnimating - In the implementation block
@property (assign,nonatomic) BOOL isFrontalMode;                                                                  //@synthesize isFrontalMode=_isFrontalMode - In the implementation block
@property (assign,nonatomic) long long pinchMode;                                                                 //@synthesize pinchMode=_pinchMode - In the implementation block
@property (assign,nonatomic) BOOL tapEnabled;                                                                     //@synthesize tapEnabled=_tapEnabled - In the implementation block
@property (assign,nonatomic) BOOL scribbleShouldClose;                                                            //@synthesize scribbleShouldClose=_scribbleShouldClose - In the implementation block
@property (nonatomic,retain) UIView * baseView;                                                                   //@synthesize baseView=_baseView - In the implementation block
@property (nonatomic,retain) SCScribbleView * scribbleView;                                                       //@synthesize scribbleView=_scribbleView - In the implementation block
@property (nonatomic,retain) UIView * magicContainerView;                                                         //@synthesize magicContainerView=_magicContainerView - In the implementation block
@property (nonatomic,retain) UIImageView * magicView;                                                             //@synthesize magicView=_magicView - In the implementation block
@property (nonatomic,retain) UIImageView * animationView;                                                         //@synthesize animationView=_animationView - In the implementation block
@property (nonatomic,retain) SCParticleAnimationManager * particleAnimationManager;                               //@synthesize particleAnimationManager=_particleAnimationManager - In the implementation block
@property (nonatomic,retain) UIImage * capturedImage;                                                             //@synthesize capturedImage=_capturedImage - In the implementation block
@property (nonatomic,retain) UIImage * lastEditImage;                                                             //@synthesize lastEditImage=_lastEditImage - In the implementation block
@property (nonatomic,retain) UIImage * maskImage;                                                                 //@synthesize maskImage=_maskImage - In the implementation block
@property (nonatomic,retain) UIColor * color;                                                                     //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIImage * texture;                                                                   //@synthesize texture=_texture - In the implementation block
@property (nonatomic,retain) SCSentinel * sentinel;                                                               //@synthesize sentinel=_sentinel - In the implementation block
@property (nonatomic,retain) id<SCPerforming> performer;                                                          //@synthesize performer=_performer - In the implementation block
@property (nonatomic,retain) NSString * dispatchQueueLabel;                                                       //@synthesize dispatchQueueLabel=_dispatchQueueLabel - In the implementation block
@property (nonatomic,retain) SCMagicToolsEditHistory * editHistory;                                               //@synthesize editHistory=_editHistory - In the implementation block
@property (assign,nonatomic) double scribbleLineWidth;                                                            //@synthesize scribbleLineWidth=_scribbleLineWidth - In the implementation block
@property (assign,nonatomic) double scribbleTapRadius;                                                            //@synthesize scribbleTapRadius=_scribbleTapRadius - In the implementation block
@property (assign,nonatomic) Class scribbleViewClass;                                                             //@synthesize scribbleViewClass=_scribbleViewClass - In the implementation block
@property (assign,nonatomic) Class animationManagerClass;                                                         //@synthesize animationManagerClass=_animationManagerClass - In the implementation block
@property (assign,nonatomic,__weak) id<SCMagicToolsBaseControllerDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCMagicToolsBaseControllerInternalDelegate> internalDelegate;              //@synthesize internalDelegate=_internalDelegate - In the implementation block
@property (assign,nonatomic) long long toolType;                                                                  //@synthesize toolType=_toolType - In the implementation block
@property (nonatomic,retain) UIImageView * magicOverlay;                                                          //@synthesize magicOverlay=_magicOverlay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearEditState;
+(void)setEditState:(id)arg1 ;
+(id)editState;
-(id<SCPerforming>)performer;
-(void)setPerformer:(id<SCPerforming>)arg1 ;
-(void)setAnimationView:(UIImageView *)arg1 ;
-(UIImage *)capturedImage;
-(void)setSentinel:(SCSentinel *)arg1 ;
-(void)_showTooltip:(id)arg1 ;
-(void)scribbleBegan;
-(SCScribbleView *)scribbleView;
-(void)scribbleEnded:(id)arg1 ;
-(void)showOnboardingTooltip;
-(void)setCapturedImage:(UIImage *)arg1 ;
-(BOOL)scribbleShouldClose;
-(void)setScribbleShouldClose:(BOOL)arg1 ;
-(id)initWithView:(id)arg1 capturedImage:(id)arg2 editHistory:(id)arg3 frontalMode:(BOOL)arg4 ;
-(void)setToolType:(long long)arg1 ;
-(void)setPinchMode:(long long)arg1 ;
-(void)setDispatchQueueLabel:(NSString *)arg1 ;
-(void)setScribbleLineWidth:(double)arg1 ;
-(void)setScribbleTapRadius:(double)arg1 ;
-(void)setScribbleViewClass:(Class)arg1 ;
-(void)setAnimationManagerClass:(Class)arg1 ;
-(void)openMagicToolWithTopView:(id)arg1 baseViewOrientation:(long long)arg2 magicImage:(id)arg3 magicState:(id)arg4 croppingState:(id)arg5 ;
-(UIImage *)lastEditImage;
-(long long)toolType;
-(void)_undo;
-(void)_runMagicking:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)computeMagicImage;
-(BOOL)isFrontalMode;
-(void)addSubviewsToArray:(id)arg1 ;
-(SCMagicToolsEditHistory *)editHistory;
-(void)setEditHistory:(SCMagicToolsEditHistory *)arg1 ;
-(void)_clearDispatchQueue;
-(void)_hideAnimation;
-(void)_updateMagicImage:(id)arg1 magicState:(id)arg2 ;
-(void)_updateUndoButtonStatus;
-(void)_showMagicAlertLabel:(id)arg1 ;
-(void)_fadeOutMagicAlertLabel;
-(void)_showAnimation;
-(void)_storeNewEditInHistory:(id)arg1 ;
-(void)_constructLastEditImage:(/*^block*/id)arg1 ;
-(BOOL)isDrawing;
-(BOOL)isMagicking;
-(long long)getUndoButtonStatus;
-(UIImageView *)magicOverlay;
-(void)setMagicOverlay:(UIImageView *)arg1 ;
-(void)setIsDrawing:(BOOL)arg1 ;
-(void)setIsMagicking:(BOOL)arg1 ;
-(void)setIsFrontalMode:(BOOL)arg1 ;
-(long long)pinchMode;
-(void)setScribbleView:(SCScribbleView *)arg1 ;
-(UIView *)magicContainerView;
-(void)setMagicContainerView:(UIView *)arg1 ;
-(UIImageView *)magicView;
-(void)setMagicView:(UIImageView *)arg1 ;
-(SCParticleAnimationManager *)particleAnimationManager;
-(void)setParticleAnimationManager:(SCParticleAnimationManager *)arg1 ;
-(void)setLastEditImage:(UIImage *)arg1 ;
-(NSString *)dispatchQueueLabel;
-(double)scribbleLineWidth;
-(double)scribbleTapRadius;
-(Class)scribbleViewClass;
-(Class)animationManagerClass;
-(void)setDelegate:(id<SCMagicToolsBaseControllerDelegate>)arg1 ;
-(id<SCMagicToolsBaseControllerDelegate>)delegate;
-(void)undo;
-(void)_reset;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(BOOL)isAnimating;
-(void)close;
-(BOOL)_isEdited;
-(void)setMaskImage:(UIImage *)arg1 ;
-(void)setInternalDelegate:(id<SCMagicToolsBaseControllerInternalDelegate>)arg1 ;
-(id<SCMagicToolsBaseControllerInternalDelegate>)internalDelegate;
-(UIImage *)texture;
-(UIView *)baseView;
-(BOOL)isOpen;
-(UIImageView *)animationView;
-(void)setIsOpen:(BOOL)arg1 ;
-(SCSentinel *)sentinel;
-(void)setIsAnimating:(BOOL)arg1 ;
-(UIImage *)maskImage;
-(void)setTapEnabled:(BOOL)arg1 ;
-(void)setTexture:(UIImage *)arg1 ;
-(BOOL)tapEnabled;
-(void)setBaseView:(UIView *)arg1 ;
@end
