/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:07 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SCNetworkConnectivityRecord : NSObject {

	double _timeStamp;
	long long _newStatus;

}

@property (assign,nonatomic) double timeStamp;                 //@synthesize timeStamp=_timeStamp - In the implementation block
@property (assign,nonatomic) long long newStatus;              //@synthesize newStatus=_newStatus - In the implementation block
-(id)initWithTS:(double)arg1 Status:(long long)arg2 ;
-(long long)newStatus;
-(void)setNewStatus:(long long)arg1 ;
-(double)timeStamp;
-(void)setTimeStamp:(double)arg1 ;
@end
