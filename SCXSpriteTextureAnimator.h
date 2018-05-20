/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SCXSprite, SCXRenderLayer;

@interface SCXSpriteTextureAnimator : NSObject {

	NSString* _currentAnimationUUID;
	SCXSprite* _sprite;
	SCXSprite* _animationSprite;
	SCXRenderLayer* _renderLayer;

}

@property (nonatomic,__weak,readonly) SCXSprite * sprite;                        //@synthesize sprite=_sprite - In the implementation block
@property (nonatomic,__weak,readonly) SCXSprite * animationSprite;               //@synthesize animationSprite=_animationSprite - In the implementation block
@property (nonatomic,__weak,readonly) SCXRenderLayer * renderLayer;              //@synthesize renderLayer=_renderLayer - In the implementation block
@property (getter=isAnimating,nonatomic,readonly) BOOL animating; 
+(void)_animateSprite:(id)arg1 fromScale:(float)arg2 toScale:(float)arg3 scaleInterpolation:(/*^block*/id)arg4 scaleDuration:(double)arg5 fromOpacity:(float)arg6 toOpacity:(float)arg7 opacityInterpolation:(/*^block*/id)arg8 opacityDuration:(double)arg9 completion:(/*^block*/id)arg10 ;
-(BOOL)_animationHasBeenCanceled:(id)arg1 ;
-(SCXSprite *)sprite;
-(SCXRenderLayer *)renderLayer;
-(void)_animateWithOriginalTextures:(id)arg1 animationType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_springUpAnimationWithOriginalTextures:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_crossfadeAnimationWithOriginalTextures:(id)arg1 completion:(/*^block*/id)arg2 ;
-(SCXSprite *)animationSprite;
-(id)initWithSprite:(id)arg1 animationSprite:(id)arg2 renderLayer:(id)arg3 ;
-(void)animateToImageIdentifier:(id)arg1 imageFetcher:(/*^block*/id)arg2 animationType:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)isAnimating;
@end
