/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:10 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIView.h>

@class GHButton, NSString, UILabel;

@interface KeyboardPressedPopup : UIView {

	GHButton* _parent;
	NSString* _artworkPath;
	UILabel* _textLabel;

}

@property (assign,nonatomic) GHButton * parent;                   //@synthesize parent=_parent - In the implementation block
@property (nonatomic,retain) NSString * artworkPath;              //@synthesize artworkPath=_artworkPath - In the implementation block
@property (assign,nonatomic) UILabel * textLabel;                 //@synthesize textLabel=_textLabel - In the implementation block
-(NSString *)artworkPath;
-(void)setArtworkPath:(NSString *)arg1 ;
-(void)drawBackgroundIntoContext:(CGContextRef)arg1 ;
-(void)drawArtworkAtPath:(id)arg1 intoContext:(CGContextRef)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(UILabel *)textLabel;
-(void)setTextLabel:(UILabel *)arg1 ;
-(GHButton *)parent;
-(void)setParent:(GHButton *)arg1 ;
@end

