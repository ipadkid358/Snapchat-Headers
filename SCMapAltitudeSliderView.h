/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UILabel, NSString;

@interface SCMapAltitudeSliderView : UIView {

	UIView* _trackView;
	UIView* _sliderContainerView;
	UIView* _sliderTabView;
	UILabel* _sliderTextView;
	double _percentage;
	long long _state;

}

@property (assign,nonatomic) double percentage;              //@synthesize percentage=_percentage - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) long long state;                //@synthesize state=_state - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(double)percentage;
-(void)setPercentage:(double)arg1 ;
@end

