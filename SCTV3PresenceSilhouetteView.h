/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:11 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Snapchat/SCTV3RingingProtocol.h>

@class UIImageView, NSString;

@interface SCTV3PresenceSilhouetteView : UIView <SCTV3RingingProtocol> {

	UIImageView* _imageView;
	BOOL _ringing;
	BOOL _animating;

}

@property (assign,nonatomic) BOOL usesGrayscaleImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPresenceColor:(id)arg1 ;
-(void)setUsesGrayscaleImage:(BOOL)arg1 ;
-(void)stopRingingAnimation;
-(void)startRingingAnimation;
-(void)_animateRingingForPhase:(unsigned long long)arg1 ;
-(BOOL)usesGrayscaleImage;
@end
