/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:48 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIButton.h>

@interface _SCButton : UIButton {

	unsigned long long _size;
	unsigned long long _style;
	unsigned long long _baseColor;

}
+(double)_buttonHeightForSize:(unsigned long long)arg1 ;
-(id)_backgroundColorForSize:(unsigned long long)arg1 style:(unsigned long long)arg2 state:(unsigned long long)arg3 ;
-(id)_borderColorForSize:(unsigned long long)arg1 style:(unsigned long long)arg2 state:(unsigned long long)arg3 ;
-(id)_titleFontForSize:(unsigned long long)arg1 ;
-(id)_defaultTitleColorForSize:(unsigned long long)arg1 style:(unsigned long long)arg2 ;
-(id)_highlightTitleColorForSize:(unsigned long long)arg1 style:(unsigned long long)arg2 ;
-(id)initWithSize:(unsigned long long)arg1 style:(unsigned long long)arg2 color:(unsigned long long)arg3 ;
-(id)_disabledColorForSize:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
@end
