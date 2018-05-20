/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:31 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCSearchCollectionViewCell.h>
#import <Snapchat/SCSearchEventAnnouncing.h>
#import <Snapchat/SCSearchViewportConfigurable.h>

@class UITextView, NSString;

@interface SCCheetahSendToUserTextTagCell : SCSearchCollectionViewCell <SCSearchEventAnnouncing, SCSearchViewportConfigurable> {

	UITextView* _textView;
	CGRect _viewportFrame;

}

@property (nonatomic,retain) UITextView * textView;                 //@synthesize textView=_textView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) CGRect viewportFrame;                  //@synthesize viewportFrame=_viewportFrame - In the implementation block
+(CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(CGSize)arg2 ;
-(void)viewportDidUpdateViewportFrame:(CGRect)arg1 dragging:(BOOL)arg2 decelerating:(BOOL)arg3 ;
-(CGRect)viewportFrame;
-(void)setViewportFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTextView:(UITextView *)arg1 ;
-(UITextView *)textView;
@end
