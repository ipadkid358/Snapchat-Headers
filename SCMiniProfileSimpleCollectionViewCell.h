/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:18 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/SCMiniProfileCollectionViewCell.h>

@class UILabel, UIImageView, UIImage, NSString;

@interface SCMiniProfileSimpleCollectionViewCell : SCMiniProfileCollectionViewCell {

	UILabel* _textLabel;
	UILabel* _detailTextLabel;
	UIImageView* _imageView;
	BOOL _disabled;
	UIImage* _image;

}

@property (nonatomic,retain) UIImage * image;                  //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * detailText; 
@property (assign,nonatomic) BOOL disabled;                    //@synthesize disabled=_disabled - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)prepareForReuse;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(NSString *)detailText;
-(void)setDetailText:(NSString *)arg1 ;
@end
