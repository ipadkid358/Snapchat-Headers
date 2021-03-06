/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:51:47 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BCOV_RACChannelTerminal;

@interface BCOV_RACChannel : NSObject {

	BCOV_RACChannelTerminal* _leadingTerminal;
	BCOV_RACChannelTerminal* _followingTerminal;

}

@property (nonatomic,readonly) BCOV_RACChannelTerminal * leadingTerminal;                //@synthesize leadingTerminal=_leadingTerminal - In the implementation block
@property (nonatomic,readonly) BCOV_RACChannelTerminal * followingTerminal;              //@synthesize followingTerminal=_followingTerminal - In the implementation block
-(BCOV_RACChannelTerminal *)leadingTerminal;
-(BCOV_RACChannelTerminal *)followingTerminal;
-(id)init;
@end

