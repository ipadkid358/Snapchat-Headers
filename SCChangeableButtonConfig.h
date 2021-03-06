/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:53 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SCChangeableButtonConfig : NSObject {

	NSString* _actionImageName;
	NSString* _reverseActionImageName;
	NSString* _actionButtonTitle;
	NSString* _reverseActionTitle;
	NSString* _loadingButtonTitle;
	NSString* _reverseLoadingTitle;
	NSString* _actionDisabledTitle;
	NSString* _reverseDisabledTitle;
	unsigned long long _style;

}

@property (nonatomic,copy) NSString * actionImageName;                     //@synthesize actionImageName=_actionImageName - In the implementation block
@property (nonatomic,copy) NSString * reverseActionImageName;              //@synthesize reverseActionImageName=_reverseActionImageName - In the implementation block
@property (nonatomic,copy) NSString * actionButtonTitle;                   //@synthesize actionButtonTitle=_actionButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * reverseActionTitle;                  //@synthesize reverseActionTitle=_reverseActionTitle - In the implementation block
@property (nonatomic,copy) NSString * loadingButtonTitle;                  //@synthesize loadingButtonTitle=_loadingButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * reverseLoadingTitle;                 //@synthesize reverseLoadingTitle=_reverseLoadingTitle - In the implementation block
@property (nonatomic,copy) NSString * actionDisabledTitle;                 //@synthesize actionDisabledTitle=_actionDisabledTitle - In the implementation block
@property (nonatomic,copy) NSString * reverseDisabledTitle;                //@synthesize reverseDisabledTitle=_reverseDisabledTitle - In the implementation block
@property (assign,nonatomic) unsigned long long style;                     //@synthesize style=_style - In the implementation block
-(NSString *)loadingButtonTitle;
-(NSString *)reverseActionTitle;
-(NSString *)reverseLoadingTitle;
-(NSString *)actionDisabledTitle;
-(NSString *)reverseDisabledTitle;
-(NSString *)actionImageName;
-(NSString *)reverseActionImageName;
-(void)setReverseActionTitle:(NSString *)arg1 ;
-(void)setLoadingButtonTitle:(NSString *)arg1 ;
-(void)setReverseLoadingTitle:(NSString *)arg1 ;
-(void)setActionDisabledTitle:(NSString *)arg1 ;
-(void)setReverseDisabledTitle:(NSString *)arg1 ;
-(void)setActionImageName:(NSString *)arg1 ;
-(void)setReverseActionImageName:(NSString *)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setActionButtonTitle:(NSString *)arg1 ;
-(NSString *)actionButtonTitle;
@end

