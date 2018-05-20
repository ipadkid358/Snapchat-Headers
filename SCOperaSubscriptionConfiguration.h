/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:20 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCOperaSubscriptionChecker;
@class UIColor, NSString;

@interface SCOperaSubscriptionConfiguration : NSObject {

	unsigned long long _subscriptionButtonState;
	UIColor* _subscriptionPrimaryColor;
	UIColor* _subscriptionSecondaryColor;
	UIColor* _subscriptionBarColor;
	NSString* _subscriptionIconKey;
	NSString* _subscribeButtonTitle;
	NSString* _unsubscribeButtonTitle;
	NSString* _loadingButtonTitle;
	NSString* _reverseLoadingButtonTitle;
	id<SCOperaSubscriptionChecker> _subscriptionChecker;
	long long _subscriptionMethod;

}

@property (nonatomic,readonly) unsigned long long subscriptionButtonState;                    //@synthesize subscriptionButtonState=_subscriptionButtonState - In the implementation block
@property (nonatomic,readonly) UIColor * subscriptionPrimaryColor;                            //@synthesize subscriptionPrimaryColor=_subscriptionPrimaryColor - In the implementation block
@property (nonatomic,readonly) UIColor * subscriptionSecondaryColor;                          //@synthesize subscriptionSecondaryColor=_subscriptionSecondaryColor - In the implementation block
@property (nonatomic,readonly) UIColor * subscriptionBarColor;                                //@synthesize subscriptionBarColor=_subscriptionBarColor - In the implementation block
@property (nonatomic,copy,readonly) NSString * subscriptionIconKey;                           //@synthesize subscriptionIconKey=_subscriptionIconKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * subscribeButtonTitle;                          //@synthesize subscribeButtonTitle=_subscribeButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * unsubscribeButtonTitle;                        //@synthesize unsubscribeButtonTitle=_unsubscribeButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * loadingButtonTitle;                            //@synthesize loadingButtonTitle=_loadingButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * reverseLoadingButtonTitle;                     //@synthesize reverseLoadingButtonTitle=_reverseLoadingButtonTitle - In the implementation block
@property (nonatomic,retain) id<SCOperaSubscriptionChecker> subscriptionChecker;              //@synthesize subscriptionChecker=_subscriptionChecker - In the implementation block
@property (nonatomic,readonly) long long subscriptionMethod;                                  //@synthesize subscriptionMethod=_subscriptionMethod - In the implementation block
-(long long)subscriptionMethod;
-(NSString *)subscribeButtonTitle;
-(NSString *)unsubscribeButtonTitle;
-(NSString *)loadingButtonTitle;
-(NSString *)reverseLoadingButtonTitle;
-(UIColor *)subscriptionPrimaryColor;
-(UIColor *)subscriptionSecondaryColor;
-(unsigned long long)subscriptionButtonState;
-(UIColor *)subscriptionBarColor;
-(id<SCOperaSubscriptionChecker>)subscriptionChecker;
-(NSString *)subscriptionIconKey;
-(void)setSubscriptionChecker:(id<SCOperaSubscriptionChecker>)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithProperties:(id)arg1 ;
@end
