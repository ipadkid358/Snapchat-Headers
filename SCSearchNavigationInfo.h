/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:12 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController;

@interface SCSearchNavigationInfo : NSObject {

	UIViewController* _viewControllerToPresent;
	long long _presentingOriginPosition;
	unsigned long long _navigationStyle;

}

@property (nonatomic,readonly) UIViewController * viewControllerToPresent;              //@synthesize viewControllerToPresent=_viewControllerToPresent - In the implementation block
@property (nonatomic,readonly) long long presentingOriginPosition;                      //@synthesize presentingOriginPosition=_presentingOriginPosition - In the implementation block
@property (nonatomic,readonly) unsigned long long navigationStyle;                      //@synthesize navigationStyle=_navigationStyle - In the implementation block
-(unsigned long long)navigationStyle;
-(id)initWithViewControllerToPresent:(id)arg1 presentingOriginPosition:(long long)arg2 navigationStyle:(unsigned long long)arg3 ;
-(id)initWithViewControllerToPresent:(id)arg1 ;
-(long long)presentingOriginPosition;
-(UIViewController *)viewControllerToPresent;
@end

