/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:45 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIImageView.h>

@class UITextView;

@interface SCSponsoredSlugView : UIImageView {

	long long _position;
	BOOL _backgroundIsShown;
	UITextView* _textView;
	double _timeBeforeFadeout;
	double _timeToFadeout;
	double _hmargin;
	double _vmargin;

}

@property (nonatomic,readonly) double timeBeforeFadeout;              //@synthesize timeBeforeFadeout=_timeBeforeFadeout - In the implementation block
@property (nonatomic,readonly) double timeToFadeout;                  //@synthesize timeToFadeout=_timeToFadeout - In the implementation block
@property (assign,nonatomic) double hmargin;                          //@synthesize hmargin=_hmargin - In the implementation block
@property (assign,nonatomic) double vmargin;                          //@synthesize vmargin=_vmargin - In the implementation block
+(id)createWithSponsoredSlug:(id)arg1 text:(id)arg2 withBackground:(BOOL)arg3 experimentManager:(id)arg4 isOnFilter:(BOOL)arg5 ;
-(double)hmargin;
-(double)vmargin;
-(double)timeBeforeFadeout;
-(BOOL)shouldSetTopOffset;
-(BOOL)shouldSetBottomOffset;
-(BOOL)shouldSetMiddleOffset;
-(BOOL)shouldSetAtCenter;
-(BOOL)shouldSetLeftOffset;
-(BOOL)shouldSetRightOffset;
-(void)setHmargin:(double)arg1 ;
-(void)setVmargin:(double)arg1 ;
-(double)timeToFadeout;
-(id)initWithSponsoredSlug:(id)arg1 text:(id)arg2 withBackground:(BOOL)arg3 experimentManager:(id)arg4 isOnFilter:(BOOL)arg5 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

