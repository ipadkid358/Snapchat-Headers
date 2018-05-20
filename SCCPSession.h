/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 19, 2018 at 4:52:17 PM Eastern Daylight Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/7AB1B6B1-534C-4BF9-A7EB-BE2BD4C13043/Snapchat.app/Snapchat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Snapchat/Snapchat-Structs.h>
#import <Snapchat/GCDAsyncSocketDelegate.h>
#import <Snapchat/SCNetworkConnectivityListener.h>

@protocol SCCPSessionDelegate, SCCPSessionLogger;
@class SCExperimentContext, SCQueuePerformer, NSDictionary, NSString, NSData, GCDAsyncSocket, NSMutableDictionary, NSDate, SCGCDTimer, SCReachabilityWatcher, SCThrottledLogger, SCCPDebugger;

@interface SCCPSession : NSObject <GCDAsyncSocketDelegate, SCNetworkConnectivityListener> {

	BOOL _isShutDown;
	unsigned short _port;
	id<SCCPSessionDelegate> _delegate;
	id<SCCPSessionLogger> _logger;
	long long _socketErrorCode;
	SCExperimentContext* _networkPingIntervalExpContext;
	SCQueuePerformer* _performer;
	NSDictionary* _authDictionary;
	NSString* _userName;
	NSString* _host;
	NSData* _hostIpAddr;
	unsigned long long _nextWriteTag;
	unsigned long long _numberOfRetries;
	GCDAsyncSocket* _socket;
	long long _state;
	NSMutableDictionary* _writeCompletionHandlers;
	NSString* _activePingID;
	NSDate* _activePingStartTime;
	SCGCDTimer* _pingSendTimer;
	SCGCDTimer* _connectTimer;
	double _connectStartTime;
	long long _globalReachability;
	SCReachabilityWatcher* _connectionReachabilityWatcher;
	NSDate* _lastWwanToWifiTimestamp;
	SCThrottledLogger* _throttledLogger;
	SCCPDebugger* _debugger;

}

@property (nonatomic,retain) SCQueuePerformer * performer;                                       //@synthesize performer=_performer - In the implementation block
@property (nonatomic,retain) NSDictionary * authDictionary;                                      //@synthesize authDictionary=_authDictionary - In the implementation block
@property (nonatomic,copy) NSString * userName;                                                  //@synthesize userName=_userName - In the implementation block
@property (nonatomic,copy) NSString * host;                                                      //@synthesize host=_host - In the implementation block
@property (nonatomic,copy) NSData * hostIpAddr;                                                  //@synthesize hostIpAddr=_hostIpAddr - In the implementation block
@property (assign,nonatomic) unsigned long long nextWriteTag;                                    //@synthesize nextWriteTag=_nextWriteTag - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfRetries;                                 //@synthesize numberOfRetries=_numberOfRetries - In the implementation block
@property (assign,nonatomic) unsigned short port;                                                //@synthesize port=_port - In the implementation block
@property (nonatomic,retain) GCDAsyncSocket * socket;                                            //@synthesize socket=_socket - In the implementation block
@property (assign,nonatomic) long long state;                                                    //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * writeCompletionHandlers;                      //@synthesize writeCompletionHandlers=_writeCompletionHandlers - In the implementation block
@property (nonatomic,copy) NSString * activePingID;                                              //@synthesize activePingID=_activePingID - In the implementation block
@property (nonatomic,retain) NSDate * activePingStartTime;                                       //@synthesize activePingStartTime=_activePingStartTime - In the implementation block
@property (nonatomic,retain) SCGCDTimer * pingSendTimer;                                         //@synthesize pingSendTimer=_pingSendTimer - In the implementation block
@property (nonatomic,retain) SCGCDTimer * connectTimer;                                          //@synthesize connectTimer=_connectTimer - In the implementation block
@property (assign,nonatomic) BOOL isShutDown;                                                    //@synthesize isShutDown=_isShutDown - In the implementation block
@property (assign,nonatomic) double connectStartTime;                                            //@synthesize connectStartTime=_connectStartTime - In the implementation block
@property (assign,nonatomic) long long globalReachability;                                       //@synthesize globalReachability=_globalReachability - In the implementation block
@property (nonatomic,retain) SCReachabilityWatcher * connectionReachabilityWatcher;              //@synthesize connectionReachabilityWatcher=_connectionReachabilityWatcher - In the implementation block
@property (nonatomic,retain) NSDate * lastWwanToWifiTimestamp;                                   //@synthesize lastWwanToWifiTimestamp=_lastWwanToWifiTimestamp - In the implementation block
@property (nonatomic,retain) SCThrottledLogger * throttledLogger;                                //@synthesize throttledLogger=_throttledLogger - In the implementation block
@property (nonatomic,retain) SCCPDebugger * debugger;                                            //@synthesize debugger=_debugger - In the implementation block
@property (assign,nonatomic,__weak) id<SCCPSessionDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<SCCPSessionLogger> logger;                                //@synthesize logger=_logger - In the implementation block
@property (assign,getter=getSocketErrorCode,nonatomic) long long socketErrorCode;                //@synthesize socketErrorCode=_socketErrorCode - In the implementation block
@property (nonatomic,retain) SCExperimentContext * networkPingIntervalExpContext;                //@synthesize networkPingIntervalExpContext=_networkPingIntervalExpContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)globalReachabilityWatcher;
+(double)retryDelay:(unsigned long long)arg1 ;
+(id)startSessionWithDelegate:(id)arg1 dataSource:(id)arg2 logger:(id)arg3 performer:(id)arg4 ;
-(SCQueuePerformer *)performer;
-(void)networkConnectivityStatusDidChange:(long long)arg1 ;
-(void)setPerformer:(SCQueuePerformer *)arg1 ;
-(void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3 ;
-(void)socketDidDisconnect:(id)arg1 withError:(id)arg2 ;
-(void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3 ;
-(double)socket:(id)arg1 shouldTimeoutReadWithTag:(long long)arg2 elapsed:(double)arg3 bytesDone:(unsigned long long)arg4 ;
-(void)socket:(id)arg1 didWriteDataWithTag:(long long)arg2 ;
-(double)socket:(id)arg1 shouldTimeoutWriteWithTag:(long long)arg2 elapsed:(double)arg3 bytesDone:(unsigned long long)arg4 ;
-(void)socketDidSecure:(id)arg1 ;
-(void)socket:(id)arg1 didReceiveTrust:(SecTrustRef)arg2 completionHandler:(/*^block*/id)arg3 ;
-(SCGCDTimer *)connectTimer;
-(void)setWriteCompletionHandlers:(NSMutableDictionary *)arg1 ;
-(void)setHostIpAddr:(NSData *)arg1 ;
-(void)setAuthDictionary:(NSDictionary *)arg1 ;
-(void)setNextWriteTag:(unsigned long long)arg1 ;
-(void)setIsShutDown:(BOOL)arg1 ;
-(void)setThrottledLogger:(SCThrottledLogger *)arg1 ;
-(void)setDebugger:(SCCPDebugger *)arg1 ;
-(void)installGlobalReachabilityWatcher;
-(id)initWithUsername:(id)arg1 Host:(id)arg2 HostIpAddr:(id)arg3 Port:(unsigned short)arg4 Auth:(id)arg5 Delegate:(id)arg6 logger:(id)arg7 performer:(id)arg8 ;
-(void)startSessionIfNotConnected;
-(BOOL)isShutDown;
-(SCThrottledLogger *)throttledLogger;
-(NSMutableDictionary *)writeCompletionHandlers;
-(unsigned long long)nextWriteTag;
-(id)_obfuscatedTextForText:(id)arg1 ;
-(id)localInterface;
-(id)interfaceTransportString;
-(long long)globalReachability;
-(SCCPDebugger *)debugger;
-(NSData *)hostIpAddr;
-(BOOL)canUseDNSCache;
-(void)terminateWithError:(id)arg1 updatedServerInfo:(id)arg2 ;
-(void)startConnectionTimeoutTimer;
-(id)disconnectDictionary;
-(void)writeDictionaryToSocket:(id)arg1 ;
-(void)resetRetryCount;
-(void)retryConnectingToHost;
-(void)invalidateTimers;
-(BOOL)_isReachable:(long long)arg1 ;
-(void)uninstallGlobalReachabilityWatcher;
-(void)setActivePingID:(NSString *)arg1 ;
-(void)setActivePingStartTime:(NSDate *)arg1 ;
-(void)markAllSendingMessagesFailed;
-(void)setSocketErrorCode:(long long)arg1 ;
-(void)setConnectTimer:(SCGCDTimer *)arg1 ;
-(SCGCDTimer *)pingSendTimer;
-(void)setPingSendTimer:(SCGCDTimer *)arg1 ;
-(void)makePingRequestWithTimeout:(double)arg1 ;
-(void)pingRequestCompletedWithStatus:(BOOL)arg1 error:(id)arg2 ;
-(NSString *)activePingID;
-(void)writeParameters:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSDate *)activePingStartTime;
-(void)scheduleNextPing;
-(void)makePingRequest;
-(void)setConnectStartTime:(double)arg1 ;
-(void)connectionTimeoutTimerFired:(id)arg1 ;
-(void)logConnectProgressWithSuccess:(BOOL)arg1 ;
-(void)restartSessionWithRetryReset:(BOOL)arg1 ;
-(double)connectStartTime;
-(long long)getSocketErrorCode;
-(void)installAddressPairReachabilityWatcherFromAddress:(const void*)arg1 toAddress:(const void*)arg2 ;
-(id)getTLSSettings;
-(unsigned long long)lengthOfBodyFromHeaderData:(id)arg1 ;
-(void)handleBodyData:(id)arg1 ;
-(void)completedWritingWithTag:(long long)arg1 error:(id)arg2 ;
-(void)uninstallAddressPairReachabilityWatcher;
-(id)connectDictionary;
-(void)handleNotificationResponse:(id)arg1 ;
-(void)handleConnectResponse:(id)arg1 ;
-(void)handleProtocolErrorResponse:(id)arg1 ;
-(void)handleErrorResponse:(id)arg1 ;
-(void)handlePingResponse:(id)arg1 ;
-(void)handleDisconnectClientMessage:(id)arg1 ;
-(id)protocolErrorDictionaryWithMessage:(id)arg1 ;
-(NSDictionary *)authDictionary;
-(void)setGlobalReachability:(long long)arg1 ;
-(BOOL)_shouldResetConnectionForNewStatus:(long long)arg1 oldStatus:(long long)arg2 ;
-(void)addressPairReachabilityWatcherFired:(BOOL)arg1 ;
-(void)setConnectionReachabilityWatcher:(SCReachabilityWatcher *)arg1 ;
-(SCReachabilityWatcher *)connectionReachabilityWatcher;
-(id)diagnosticStateString;
-(void)logSendAttempt;
-(SCExperimentContext *)networkPingIntervalExpContext;
-(void)setNetworkPingIntervalExpContext:(SCExperimentContext *)arg1 ;
-(NSDate *)lastWwanToWifiTimestamp;
-(void)setLastWwanToWifiTimestamp:(NSDate *)arg1 ;
-(NSString *)userName;
-(void)setDelegate:(id<SCCPSessionDelegate>)arg1 ;
-(NSString *)description;
-(id<SCCPSessionDelegate>)delegate;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSString *)host;
-(void)endSession;
-(unsigned short)port;
-(void)setHost:(NSString *)arg1 ;
-(BOOL)isConnected;
-(void)setUserName:(NSString *)arg1 ;
-(void)disconnectWithError:(id)arg1 ;
-(void)startSession;
-(BOOL)isConnecting;
-(void)setSocket:(GCDAsyncSocket *)arg1 ;
-(void)setState:(long long)arg1 error:(id)arg2 ;
-(void)shutdown;
-(void)setPort:(unsigned short)arg1 ;
-(GCDAsyncSocket *)socket;
-(id<SCCPSessionLogger>)logger;
-(void)setLogger:(id<SCCPSessionLogger>)arg1 ;
-(unsigned long long)numberOfRetries;
-(void)setNumberOfRetries:(unsigned long long)arg1 ;
-(id)debugInfo;
@end
