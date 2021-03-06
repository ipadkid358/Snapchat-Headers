/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:18 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <UIKit/UIImageView.h>

@class NSURL;

@interface SCImpalaBusinessLogoView : UIImageView {

	BOOL _didInitialSetup;
	NSURL* _logoURL;
	UIEdgeInsets _defaultImageInsets;

}

@property (assign,nonatomic) UIEdgeInsets defaultImageInsets;              //@synthesize defaultImageInsets=_defaultImageInsets - In the implementation block
@property (nonatomic,retain) NSURL * logoURL;                              //@synthesize logoURL=_logoURL - In the implementation block
-(UIEdgeInsets)defaultImageInsets;
-(void)setDefaultImageInsets:(UIEdgeInsets)arg1 ;
-(void)layoutSubviews;
-(NSURL *)logoURL;
-(void)setLogoURL:(NSURL *)arg1 ;
@end

