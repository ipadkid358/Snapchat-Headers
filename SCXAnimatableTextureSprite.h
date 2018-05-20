/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:16 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/SCXSprite.h>

@class SCXSprite;

@interface SCXAnimatableTextureSprite : SCXSprite {

	SCXSprite* _animationSprite;

}

@property (nonatomic,readonly) SCXSprite * animationSprite;              //@synthesize animationSprite=_animationSprite - In the implementation block
-(void)animateToLocationInterpolator:(/*^block*/id)arg1 duration:(double)arg2 mapView:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setLocationInterpolator:(/*^block*/id)arg1 ;
-(SCXSprite *)animationSprite;
-(id)init;
-(void)setZIndex:(id)arg1 ;
@end
