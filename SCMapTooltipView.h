/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:41 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIImageView.h>

@class UIView, UILabel;

@interface SCMapTooltipView : UIImageView {

	UIView* _tooltipLabelContainer;
	UILabel* _tooltipLabel;
	double _lastStartTime;
	double _lastStopTime;
	unsigned long long _currentLoopCount;

}

@property (assign,nonatomic) unsigned long long currentLoopCount;              //@synthesize currentLoopCount=_currentLoopCount - In the implementation block
-(unsigned long long)currentLoopCount;
-(void)setCurrentLoopCount:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)isAnimating;
-(void)stopAnimating;
-(void)startAnimating;
@end

