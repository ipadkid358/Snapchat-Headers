/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface SCFrameableContainerView : UIView {

	BOOL _framing;
	UIView* _contentView;
	CGSize _naturalContentSize;

}

@property (nonatomic,readonly) UIView * contentView;                 //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) BOOL framing;                           //@synthesize framing=_framing - In the implementation block
@property (assign,nonatomic) CGSize naturalContentSize;              //@synthesize naturalContentSize=_naturalContentSize - In the implementation block
-(CGSize)naturalContentSize;
-(void)setFraming:(BOOL)arg1 ;
-(BOOL)framing;
-(void)setNaturalContentSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
@end

