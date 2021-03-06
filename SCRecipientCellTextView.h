/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:37 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface SCRecipientCellTextView : UIView {

	UILabel* _textLabel;
	UILabel* _detailTextLabel;

}

@property (nonatomic,retain) UILabel * textLabel;                    //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UILabel * detailTextLabel;              //@synthesize detailTextLabel=_detailTextLabel - In the implementation block
-(void)setSelectionAllowed:(BOOL)arg1 ;
-(double)_getLabelHeight:(id)arg1 width:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
-(UILabel *)textLabel;
-(UILabel *)detailTextLabel;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)setDetailTextLabel:(UILabel *)arg1 ;
@end

